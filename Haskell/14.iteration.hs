
isprime :: Int -> Bool
isprime 1 = True
isprime 2 = True
isprime n = isprimecheck n (n-1)

isprimecheck :: Int -> Int -> Bool
isprimecheck n 1 = True
isprimecheck n t = if( n `rem` t)==0 then False else isprimecheck n (t-1)

main = print( isprime 18)