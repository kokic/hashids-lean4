
import Hashids.hashids

#eval Hashids.defaultHashids.encode [12345]
#eval Hashids.defaultHashids.decode "j0gW"

#eval Hashids.defaultHashids.encode [1, 2, 3]


def hashids : Hashids := Hashids.fromSalt "this is my salt"

#eval hashids.encode [12345]
#eval hashids.decode "NkK9"




