add'::String -> String -> Int
add' x y = let
    a =read x::Int
    b =read y::Int
    in a + b

concat' ::IO()
concat' = do  
    x <- getLine
    y <- getLine
    print ( add' x y )

