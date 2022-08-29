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



-- Ejercicio 4.a


paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] g = True
paratodo' (x:xs) g = (g x) && (paratodo' xs g)



-- Ejercicio 4.b

existe' :: [a] -> (a -> Bool) -> Bool
existe' [] g = False
existe' (x:xs) g = (g x) || (existe' xs g)


-- Ejercicio 4.c

sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] n = 0
sumatoria' (x:xs) n = n x + (sumatoria' xs n)


-- Ejercicio 4.d


productoria' :: [a] -> (a -> Int) -> Int
productoria' [] n = 1
productoria' (x:xs) n = n x * (productoria' xs n)



-- Ejercicio 5

--paratodo1 :: [Bool] -> Bool
--paratodo1 xs = paratodo' xs (==True)

paratodo1 :: [Bool] -> Bool
paratodo1 xs = paratodo' xs id


-- Ejercicio 6.a

todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs even


-- Ejercicio 6.b

esMultiplo :: Int -> Int -> Bool
esMultiplo x y = mod y x == 0

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo x ys = existe' ys (esMultiplo x)



-- Ejercicio 6.c


sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [0..(n-1)] (^2)


-- Ejercicio 6.d

factorial' :: Int -> Int
factorial' n = productoria' [1..n] (id)


-- Ejercicio 6.e

pares :: Int -> Int
pares x |even x = x
        |otherwise = 1

multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria'(xs) (pares)



-- Ejercicio 7
-- Las funciones tipo Map se encargan de aplicar a cada elemento de una lista, una funcion, devolviendo una lista, compuesta por los elemntos de la primera, luego de haberle aplicado a cada uno una funcion.
-- Las funciones tipo Filter toman una lista a la cual se le aplica una serie de condiciones mediante un predicado, resultando en una lista compuesta por los elementos de la lista, que cumplan con ese predicado

-- La expresion map succ [1,-4,6,2,-8] donde succ n = n+1, equivale a [2,-3,5,3,-7]
-- La expresion filter esPositivo [1,-4,6,2,-8], equivale a [1,6,2]


-- Ejercicio 8.a

duplica :: [Int] -> [Int]
duplica [] = []
duplica (x:xs) = x*2 : (duplica xs)

-- Ejercicio 8.b

duplica' :: [Int] -> [Int] 
duplica' xs = map (*2) xs

-- Ejercicio 9.a

sonPares :: [Int] -> [Int]
sonPares [] = []
sonPares (x:xs) | even x = x : (sonPares xs)
                | otherwise = (sonPares xs)
                

-- Ejercicio 9.b

sonPares' :: [Int] -> [Int]
sonPares' xs = filter (even) xs

-- Ejercicio 9.c

multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria (filter even xs)


-- Ejercicio 10.a

primIgualesA :: Eq(a) => a -> [a] -> [a]
primIgualesA a [] = []
primIgualesA a (x:xs) | a == x = x : (primIgualesA a xs)
                      | a /= x = []





-- Ejercicio 10.b

primIgualesA' :: Eq(a) => a -> [a] -> [a]
primIgualesA' a (x:xs)
