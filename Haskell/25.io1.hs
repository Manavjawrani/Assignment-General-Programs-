printSomeStuff= do print "hi"
                   print " Good Morning"


makeAFile = do writeFile "file.txt" "something"
               writeFile "file.txt" "something more"