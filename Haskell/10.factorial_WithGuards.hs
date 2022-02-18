
factorial :: Int -> Int
factorial x | x == 0 = 1
factorial x | x/=0 = x * factorial (x - 1)
 
main =  print (factorial 4)

