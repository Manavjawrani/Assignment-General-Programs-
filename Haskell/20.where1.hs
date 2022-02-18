in_ranges :: Int-> Int -> Int -> Bool
in_ranges min max x = if ilb then iub else False 
     where 
     ilb = (min <= x)
     iub = (max >= x)