# hashids-lean4

Lean4 implementation of http://hashids.org

## Usage

```lean
import Hashids.hashids
```

default salt example
```lean
#eval Hashids.defaultHashids.encode [12345] 
-- Except.ok "j0gW"

#eval Hashids.defaultHashids.decode "j0gW"
-- Except.ok [12345]

#eval Hashids.defaultHashids.encode [1, 2, 3]
-- Except.ok "o2fXhV"
```

`"this is my salt"` salt example.
```lean

def hashids : Hashids := Hashids.fromSalt "this is my salt"

#eval hashids.encode [12345]
-- Except.ok "NkK9"

#eval hashids.decode "NkK9"
-- Except.ok [12345]
```
