main = do
let x = [3,6,8,22]
putStrLn "The given list is"
print x
n <- getLine
let m = (read n::Int)
putStrLn ("Is the the no "++ n ++"presnt in given list?")
print (elem m (x))