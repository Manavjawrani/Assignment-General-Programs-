import Data.Char ( isLower )
convert :: [Char] -> [Bool]
convert x  = map(\x -> isLower x) x