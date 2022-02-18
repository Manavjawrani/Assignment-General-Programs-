import System.IO

main = do
 myfile <- openFile "sample.txt" ReadMode
 firtsLine <- hGetLine myfile
 putStrLn firtsLine
 secLine <- hGetLine myfile
 putStrLn secLine
 hClose myfile
 