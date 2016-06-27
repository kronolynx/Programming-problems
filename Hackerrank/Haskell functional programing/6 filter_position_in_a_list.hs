f :: [Int] -> [Int]
f [] = []
f (x:xs:xss) = xs : f xss

-- This part deals with the Input and Output and can be used as it is. Do not modify it.
main = do
   inputdata <- getContents
   mapM_ (putStrLn. show). f. map read. lines $ inputdata
