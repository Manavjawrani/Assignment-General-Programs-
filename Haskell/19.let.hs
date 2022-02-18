in_range :: Int-> Int -> Int -> Bool
in_range min max x =
  let ilb = (min <= x)
      iub = (max >= x)
  in
    ilb && iub