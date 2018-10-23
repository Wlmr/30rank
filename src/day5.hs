main = interact $ unlines . reverse . showMul 10 . read

showMul :: Int -> Int -> [String]
showMul 0 x = []
showMul n x = (show x ++ " x " ++ show n ++ " = " ++ show (x * n)) : showMul (n - 1) x

