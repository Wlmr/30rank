NGUAGE FlexibleInstances, UndecidableInstances, DuplicateRecordFields #-}

module Main where

import Control.Monad
import Data.Array
import Data.Bits
import Data.List
import Data.List.Split
import Data.Set
import Debug.Trace
import System.Environment
import System.IO
import System.IO.Unsafe

-- Complete the arrayManipulation function below.
arrayManipulation n queries = 

readMultipleLinesAsStringArray :: Int -> IO [String]
readMultipleLinesAsStringArray 0 = return []
readMultipleLinesAsStringArray n = do
    line <- getLine
    rest <- readMultipleLinesAsStringArray(n - 1)
return (line : rest)

main :: IO()
    main = do
    stdout <- getEnv "OUTPUT_PATH"
    fptr <- openFile stdout WriteMode

    nmTemp <- getLine
    let nm = words nmTemp

    let n = read (nm !! 0) :: Int

    let m = read (nm !! 1) :: Int

    queriesTemp <- readMultipleLinesAsStringArray m
    let queries = Data.List.map (\x -> Data.List.map (read :: String -> Int) . words $ x) queriesTemp

    let result = arrayManipulation n queries

    hPutStrLn fptr $ show result

    hFlush fptr
    hClose fptr
