factOn :: Int -> Int
factOn n = if n == 0 
then 1 
else  n * factOn (n-1)

main =  print( factOn 5)




