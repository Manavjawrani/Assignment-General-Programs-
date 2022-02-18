in_range :: Int-> Int -> Int -> Bool
in_range min max x = ilb && iub 
     where 
     ilb = (min <= x)
     iub = (max >= x)