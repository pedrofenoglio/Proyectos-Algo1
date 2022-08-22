-- Ejercicio 1.a

esCero :: Int -> Bool
esCero x = x == 0


-- Ejercicio 1.b

esPositivo :: Int -> Bool
esPositivo y = y > 0


-- Ejercicio 1.c
vocales = "aeiou"

existe a [] = False
existe a (x:xs) = a == x || existe a xs
 

esVocal :: Char -> Bool
esVocal x  = existe x vocales
  
-- Ejercicio 2.a
 
paraTodo :: [Bool] -> Bool
paraTodo [] = True
paraTodo (x:xs) = x && (paraTodo xs)
 
 
-- Ejercicio 2.b
 
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + (sumatoria xs)
 

-- Ejercicio 2.c
productoria :: [Int] -> Int
productoria [] = 0
productoria (x:xs) = x * (productoria xs)


-- Ejercicio 2.d

factorial :: Int -> Int
factorial 0 = 1
factorial n = n * (factorial (n-1)) 
 

 -- Ejercicio 2.e
 
promedio :: [Int] -> Int
promedio xs = div (sumatoria xs) (length xs)



 -- Ejercicio 3
 
pertenece :: Int -> [Int] -> Bool
pertenece n [] = False
pertenece n (x:xs) = x==n || (pertenece n xs)
