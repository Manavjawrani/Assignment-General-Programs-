fibonacci :: Num t => t -> t -> [t]
fibonacci a b = a : fibonacci b (a+b)

main :: IO ()
main = do 
 putStrLn "Enter number of elements needed:"
 input<-getLine
 let n = (read input :: Int)
 putStrLn "Fibonacci series :  "
 print (take(n) (fibonacci 0 1))
