myFunction :: [Int] -> Int
myFunction [a] = a +3
myFunction [a,b] = a + b + 1
myFunction (1:2:_) = 5
myFunction (4:_:_:_)= 100
myFunction xs = length xs




