main = interact $ unlines . flip take (repeat "Hello World!") . read
