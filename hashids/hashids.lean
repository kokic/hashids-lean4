
structure Hashids :=
  (saltIn : String)
  (minHashLengthIn : Nat)
  (alphabetIn : String)

-- javascript Number.MAX_SAFE_INTEGER + 1
def Hashids.MAX_INTEGER : UInt64 := 9007199254740992

def Hashids.defaultSalt := ""
def Hashids.defaultAlphabet := "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"
def Hashids.defaultSeparators := "cfhistuCFHISTU"
def Hashids.defaultMinimalHashLength := 0
 
def Hashids.salt := saltIn
def Hashids.hashLength := defaultMinimalHashLength

def Hashids.defaultHashids : Hashids := ⟨defaultSalt, defaultMinimalHashLength, defaultAlphabet⟩
def Hashids.fromSalt (salt : String) : Hashids := ⟨salt, defaultMinimalHashLength, defaultAlphabet⟩

structure AlphabetAndSeparators := 
  (alphabet: String) 
  (separators: String)
  (guards: String)

structure ShuffleData := 
  (alphabet: List Char)
  (salt: String)
  (cumulative: Nat) 
  (saltReminder: Nat)

structure HashData := 
  (hash: String) 
  (current: UInt64)

def Hashids.guardDivisor := 12
def Hashids.separatorDivisor := 3.5



partial def shuffle (data: ShuffleData) (currentPosition: Nat) (limit: Nat) : ShuffleData :=
  if currentPosition < limit then data
  else let currentAlphabet := data.alphabet
       let saltReminder := data.saltReminder % data.salt.length
       let asciiValue := (data.salt.get! (String.Pos.mk saltReminder)).toNat
       let cumulativeValue := data.cumulative + asciiValue
       let positionToSwap := (asciiValue + saltReminder + cumulativeValue) % currentPosition
       let currentAlphabet' := currentAlphabet.set positionToSwap (currentAlphabet[currentPosition]!)
       let currentAlphabet'' := currentAlphabet'.set currentPosition (currentAlphabet[positionToSwap]!)
       shuffle (ShuffleData.mk currentAlphabet'' data.salt cumulativeValue (saltReminder + 1)) 
               (currentPosition - 1) limit



def consistentShuffle (alphabet: String) : (String -> String)
  | "" => alphabet
  | salt => let initial := ShuffleData.mk alphabet.toList salt 0 0
            (shuffle initial (alphabet.length - 1) 1).alphabet.asString


def Hashids.calculateSeparatorsLength (alphabet: String) : Nat :=
  let result := (alphabet.length.toFloat / separatorDivisor) 
    |>.ceil.toUInt32.toNat
  if result = 1 then 2 else result


def Hashids.adjustAlphabetAndSeparators (hashids : Hashids) 
                                        (alphabetWithoutSeparators : String) 
                                        (shuffledSeparators : String) : AlphabetAndSeparators :=
  if shuffledSeparators.isEmpty || (alphabetWithoutSeparators.length / shuffledSeparators.length).toFloat > separatorDivisor then
    let sepsLength := calculateSeparatorsLength alphabetWithoutSeparators
    if sepsLength > shuffledSeparators.length then
      let difference := sepsLength - shuffledSeparators.length
      let seps := shuffledSeparators ++ alphabetWithoutSeparators.extract 0 ⟨difference⟩
      let alpha := alphabetWithoutSeparators.extract ⟨difference⟩ ⟨alphabetWithoutSeparators.length⟩
      AlphabetAndSeparators.mk (consistentShuffle alpha hashids.salt) seps ""
    else
      let seps := shuffledSeparators.extract 0 ⟨sepsLength⟩
      AlphabetAndSeparators.mk (consistentShuffle alphabetWithoutSeparators hashids.salt) seps ""
  else
    AlphabetAndSeparators.mk (consistentShuffle alphabetWithoutSeparators hashids.salt) shuffledSeparators ""


def minimalAlphabetLength := 16

def Hashids.calculateAlphabetAndSeparators (hashids : Hashids) (userAlphabet : String) : AlphabetAndSeparators := 
  let uniqueAlphabet := userAlphabet.toList.eraseDups
  -- if uniqueAlphabet.length < minimalAlphabetLength then
    -- throw (IO.userError s!"alphabet must contain at least {minimalAlphabetLength} unique characters")
  -- else if uniqueAlphabet.elem ' ' then
    -- throw (IO.userError "alphabet cannot contain spaces")
  -- else
    let legalSeparators := defaultSeparators.toList.filter uniqueAlphabet.elem
    let alphabetWithoutSeparators := uniqueAlphabet.filter (!legalSeparators.elem ·)
    let shuffledSeparators := consistentShuffle legalSeparators.asString hashids.salt
    let adjusted := hashids.adjustAlphabetAndSeparators alphabetWithoutSeparators.asString shuffledSeparators
    let adjustedAlphabet := adjusted.alphabet
    let adjustedSeparators := adjusted.separators
    let guardcount := adjustedAlphabet.length / guardDivisor
    if adjustedAlphabet.length < 3 then
      let guards := adjustedSeparators.extract 0 ⟨guardcount⟩
      let seps := adjustedSeparators.extract ⟨guardcount⟩ ⟨adjustedSeparators.length⟩
      AlphabetAndSeparators.mk adjustedAlphabet seps guards
    else
      let guards := adjustedAlphabet.extract 0 ⟨guardcount⟩
      let alphabet := adjustedAlphabet.extract ⟨guardcount⟩ ⟨adjustedAlphabet.length⟩
      AlphabetAndSeparators.mk alphabet adjustedSeparators guards


-- def calculateAlphabetAndSeparators (userAlphabet : String) : AlphabetAndSeparators := 
--   let length := userAlphabet.length
--   let guardcount := length / 12
--   if length < 3 then
--     let alphabet := userAlphabet
--     let guards' := defaultSeparators.extract 0 ⟨guardcount⟩
--     let separators' := defaultSeparators.extract ⟨guardcount⟩ ⟨defaultSeparators.length⟩
--     ⟨alphabet, separators', guards'⟩
--   else
--     let alphabet := userAlphabet
--     let guards' := alphabet.extract 0 ⟨guardcount⟩
--     let separators' := userAlphabet.extract ⟨guardcount⟩ ⟨alphabet.length⟩
--     ⟨alphabet, separators', guards'⟩


def Hashids.alphandseps (hashids : Hashids) := hashids.calculateAlphabetAndSeparators hashids.alphabetIn
def Hashids.alphabet (hashids : Hashids) := hashids.alphandseps.alphabet
def Hashids.separators (hashids : Hashids) := hashids.alphandseps.separators 
def Hashids.guards (hashids : Hashids) := hashids.alphandseps.guards

-- THIS IS MY SALT
-- 5N6y2rljDQak4xgzn8ZR1oKYLmJpEbVq3OBv9WwXPMe7
-- UHuhtcITCsFifS
-- AdG0

-- #eval [alphabet, separators, guards]
-- #eval guards






partial def Hashids.hashAux (number: UInt64) 
                            (alphabet: List Char) 
                            (data: HashData): HashData := 
  if data.current <= 0 then data 
  else let hashCharacter := alphabet[(data.current % alphabet.length).toNat]!
       let current := data.current / alphabet.length.toUInt64
       hashAux number alphabet (HashData.mk s!"{hashCharacter}{data.hash}" current)

def Hashids.hash (input: UInt64) (alphabet: String): String := 
  (hashAux input (alphabet.toList) (HashData.mk "" input)).hash






partial def Hashids.initialEncode (hashids : Hashids)
                                  (numbers: List UInt64)
                                  (separators: List Char)
                                  (bufferSeed: String)
                                  (currentIndex: Nat)
                                  (alphabet: String)
                                  (currentReturnString: String) : String × String := 
  if currentIndex >= numbers.length then (currentReturnString, alphabet)
  else let currentNumber := numbers[currentIndex]!
       let buffer := bufferSeed ++ hashids.salt ++ alphabet
       let alphabet' := consistentShuffle alphabet (buffer.extract 0 (String.Pos.mk alphabet.length))
       let last := hash currentNumber alphabet'
       let returnString := if currentIndex + 1 >= numbers.length 
         then currentReturnString ++ last
         else let nextNumber := currentNumber.toNat % ((last.get! 0).toNat + currentIndex)
              let sepsIndex := nextNumber % separators.length
              currentReturnString ++ last ++ separators[sepsIndex]!.toString
       hashids.initialEncode numbers separators bufferSeed (currentIndex + 1) alphabet' returnString
-- decreasing_by sorry




partial def Hashids.ensureMinimalLength (hashids : Hashids)
                                        (halfLength: Nat) 
                                        (alphabet: String) 
                                        (returnString: String): String := 
  if returnString.length >= hashLength then returnString
  else let alphabet' := consistentShuffle alphabet alphabet
       let returnString' := alphabet'.drop halfLength 
                         ++ returnString 
                         ++ alphabet'.extract 0 (String.Pos.mk halfLength)
       hashids.ensureMinimalLength halfLength alphabet' returnString'
-- decreasing_by sorry





def Hashids.guardIndex (hashids : Hashids) 
                       (numbersHash: UInt32) 
                       (returnString: String) 
                       (index: Nat): Nat := 
  (numbersHash.toNat + returnString.toList[index]!.toNat) % hashids.guards.length


def Hashids.addGuardsIfNecessary (hashids : Hashids)
                                 (encodedString: String) 
                                 (numbersHash: UInt32): String := 
  if encodedString.length >= hashLength then encodedString
  else let guard := hashids.guards.toList[hashids.guardIndex numbersHash encodedString 0]!
       let returnString := encodedString ++ guard.toString
       if returnString.length >= hashLength then returnString
       else let guard' := hashids.guards.toList[hashids.guardIndex numbersHash returnString 2]!
            returnString ++ guard'.toString







def Hashids.encode (hashids : Hashids) : List UInt64 → Except String String
  | [] => Except.ok ""
  | xs => if xs.contains MAX_INTEGER 
      then Except.error s!"number can not be greater than {MAX_INTEGER}"
      else let len := hashids.alphabet.length
           let numbersHash := List.range (xs.length)
             |>.map (λ i => (xs[i]! % (i + 100)).toUInt32 )
             |>.foldr UInt32.add 0
          let initial := hashids.alphabet.toList[(numbersHash % len).toNat]!
          let initial' := initial.toString
          let (encodedString, encodingAlphabet) := hashids.initialEncode 
            xs hashids.separators.toList initial' 0 hashids.alphabet initial'
          let returnString := hashids.addGuardsIfNecessary encodedString numbersHash
          Except.ok (hashids.ensureMinimalLength (len / 2) encodingAlphabet returnString)






-- require RegExp
def Hashids.extractLotteryCharAndHashs (hashids : Hashids) 
                                       (initialSplit : List String) : Char × List String :=
  let separatorsRegex : String := hashids.separators -- s!"[{separators}]"
  let i : Nat := if initialSplit.length = 2 ∨ initialSplit.length = 3 then 1 else 0
  let ithElementOfSplit : String := initialSplit.get! i
  let lotteryChar : Char := ithElementOfSplit.get! 0
  let breakdown : List String :=
    let substr : String := ithElementOfSplit.extract (String.Pos.mk 1) 
      (String.Pos.mk ithElementOfSplit.length)
    substr.replace separatorsRegex " " |>.splitOn " "
  (lotteryChar, breakdown)







partial def Hashids.unhashAux (input: List Char) 
                              (alphabet: String) 
                              (alphabetLengthU64: UInt64) 
                              (currentNumber: UInt64) 
                              (currentIndex: Nat): UInt64 :=
  if currentIndex >= input.length then currentNumber
  else let position := alphabet.find (· == input[currentIndex]!) |>.byteIdx
       let exp := input.length - currentIndex - 1
       let factor := alphabetLengthU64.toNat ^ exp |>.toUInt64
       let number := currentNumber + (position.toUInt64 * factor)
       unhashAux input alphabet alphabetLengthU64 number (currentIndex + 1)


def Hashids.unhash (input: String) (alphabet: String): UInt64 :=
  unhashAux input.toList alphabet alphabet.length.toUInt64 0 0

def Hashids.unhashSubHashes (hashids : Hashids)
                            (hashes: List String) 
                            (lottery: Char) 
                            (currentReturn: List UInt64) 
                            (alphabet: String): List UInt64 :=

  let rec unhashSubHashesAux (hashes: List String) 
                             (currentReturn: List UInt64) 
                             (alphabet: String): List UInt64 :=
    match hashes with
      | [] => currentReturn
      | h :: t =>
        let buffer := s!"{lottery}{hashids.salt}{alphabet}"
        let alphabet' := consistentShuffle alphabet 
          (buffer.extract 0 (String.Pos.mk alphabet.length))
        let decoded := unhash h alphabet'
        unhashSubHashesAux t (currentReturn ++ [decoded]) alphabet'
      
  unhashSubHashesAux hashes currentReturn alphabet




-- require RegExp
def Hashids.decode (hashids : Hashids) (hash : String) : Except String (List UInt64) :=
  if hash.isEmpty then Except.ok []
  else let guardsRegex := hashids.guards -- s!"[{guards}]"
       let hashWithSpacesInsteadOfGuards := hash.replace guardsRegex " "
       let initialSplit := hashWithSpacesInsteadOfGuards.splitOn " "
       let (lottery, hashBreakdown) := hashids.extractLotteryCharAndHashs initialSplit   
       let returnValue := hashids.unhashSubHashes hashBreakdown lottery [] hashids.alphabet
       match hashids.encode returnValue with
         | Except.ok s => Except.ok (if s == hash then returnValue else [])
         | _ => Except.error "decode error"

