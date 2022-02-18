main = do
putStrLn "Enter first no:"
input1 <- getLine
putStrLn "Enter second no:"
input2 <- getLine
let x = read input1 :: Int
let y = read input2 :: Int

putStrLn " Enter the operator"
oper <- getChar

putStr( show x)
putChar(oper)
putStr( show y)







