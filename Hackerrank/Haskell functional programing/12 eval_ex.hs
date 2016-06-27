solve :: Double -> Double
solve x = solve' 1 (1) 
    where
        solve' 10 fact = 0
        solve' n 1 =  1 + x + solve' (n + 1) 2
        solve' n fact =  x ** n / fact  + solve' (n + 1) (fact * (n + 1))

main :: IO ()
main = getContents >>= mapM_ print. map solve. map (read::String->Double). tail. words
