main :: IO ()
main = do
let var = 5
if mod var 2 ==0
then putStrLn "Number is even"
else putStrLn "Number is odd"