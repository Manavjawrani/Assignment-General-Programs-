myFunction :: [Int] -> Int
myFunction xs = case xs of
  [a] -> a + 3
  [a,b] -> a + b + 1
  (1 : 2 : _) -> 3
  (3 : 4 : _) -> 7
  xs -> length xs