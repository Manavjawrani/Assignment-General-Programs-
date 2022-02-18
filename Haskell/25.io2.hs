echo = do line <- getLine
          print line

echoFile = do fileContents <- readFile "file.txt"
              print fileContents
            