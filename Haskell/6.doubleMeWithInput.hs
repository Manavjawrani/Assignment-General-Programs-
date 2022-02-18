doubleMe :: Int -> Int
doubleMe x = 2*x

main = do
input <- getLine 
let x = (read input :: Int) --read converts string to specfic type
print ( doubleMe x)


