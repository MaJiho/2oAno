--A

--1

SELECT *
FROM Equipas;

--2

SELECT *
FROM Equipas
WHERE id_equipa LIKE '12';


--3

SELECT id_equipa, nome
FROM Equipas;

--4

SELECT id_treinador, nome, idade
FROM Treinadores
WHERE idade < 40;

--5

SELECT *
FROM Experiencias
WHERE escalao LIKE 'juniores' AND anos > 10;

--6

SELECT *
FROM Treinadores
WHERE idade <= 53 AND idade >= 45;

--7

SELECT *
FROM Bolas
WHERE fabricante LIKE 'Reebok' OR fabricante LIKE 'Olimpic';

--8

SELECT *
FROM treinadores
WHERE nome LIKE 'A%';


--B

--1

SELECT COUNT(id_equipa)
FROM equipas;


--2

SELECT COUNT( DISTINCT fabricante)
FROM bolas;

--3

SELECT COUNT(id_treinador)
FROM treinadores
WHERE idade > 40;

--4

SELECT MAX (idade)
FROM treinadores;


--C

--1

SELECT equipas.id_equipa, bolas.id_equipa
FROM equipas INNER JOIN bolas
ON equipas.id_equipa = bolas.id_equipa
WHERE bolas.fabricante LIKE 'Adidas';

--2

SELECT DISTINCT equipas.id_equipa, bolas.id_equipa
FROM equipas INNER JOIN bolas
ON equipas.id_equipa = bolas.id_equipa
WHERE bolas.fabricante LIKE 'Adidas';

--3

SELECT AVG(treinadores.idade)
FROM treinadores INNER JOIN experiencias
ON treinadores.id_treinador=experiencias.id_treinador
WHERE escalao LIKE 'juvenis';

--4

SELECT treinadores.*
FROM  treinadores INNER JOIN experiencias
ON treinadores.id_treinador = experiencias.id_treinador
WHERE escalao LIKE 'juniores' AND anos >= 5;

--5

SELECT DISTINCT treinadores.*, equipas.*
FROM treinadores INNER JOIN experiencias
ON treinadores.id_treinador = experiencias.id_treinador
INNER JOIN equipas 
ON experiencias.id_equipa = equipas.id_equipa;

--6

SELECT DISTINCT treinadores.nome, treinadores.telefone, equipas.nome
FROM treinadores INNER JOIN experiencias
ON treinadores.id_treinador = experiencias.id_treinador
INNER JOIN equipas
on experiencias.id_equipa = equipas.id_equipa;

-- 7.
SELECT DISTINCT equipas.*, treinadores.*
FROM equipas INNER JOIN experiencias
ON equipas.id_equipa = experiencias.id_equipa
INNER JOIN treinadores
ON experiencias.id_treinador = treinadores.id_treinador
WHERE equipas.nome LIKE 'Académico';

-- 8.
SELECT MAX(treinadores.idade)
FROM equipas INNER JOIN experiencias
ON equipas.id_equipa = experiencias.id_equipa
INNER JOIN treinadores
ON experiencias.id_treinador = treinadores.id_treinador
WHERE equipas.nome LIKE 'Académico';

-- 9.
SELECT SUM(experiencias.anos)
FROM equipas INNER JOIN experiencias
ON equipas.id_equipa = experiencias.id_equipa
INNER JOIN treinadores
ON experiencias.id_treinador = treinadores.id_treinador
WHERE equipas.nome LIKE 'Académico' AND treinadores.nome LIKE 'António';