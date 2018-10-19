main = interact $ weirdTest . read

weirdTest :: Int -> String
weirdTest n
    | odd n || elem n [6 .. 20] = "Weird"
    | otherwise                 = "Not Weird"
