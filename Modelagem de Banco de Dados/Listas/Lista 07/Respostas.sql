-- EXERCÍCIO 01
SELECT L.titulo, ES.nome, A.nome, ED.nome FROM livro L 
JOIN livro_estilo ON livro_estilo.id_livro = L.id_livro
JOIN estilo ES ON ES.id_estilo = livro_estilo.id_estilo
JOIN livro_autor ON livro_autor.id_livro = L.id_livro
JOIN autor A ON A.id_autor = livro_autor.id_autor
JOIN editora ED ON ED.id_editora = L.id_editora;

-- EXERCÍCIO 02
SELECT L.titulo, ED.nome FROM livro L
JOIN editora ED ON L.id_editora = ED.id_editora 
WHERE ED.telefone = 123345;

-- EXERCÍCIO 03
SELECT L.titulo, A.nome FROM livro L
JOIN livro_autor LA ON LA.id_livro = L.id_livro
JOIN autor A ON A.id_autor = LA.id_autor
WHERE A.idade = 35;

-- EXERCÍCIO 04
SELECT L.titulo, A.nome, ED.nome FROM livro L 
JOIN livro_autor ON livro_autor.id_livro = L.id_livro
JOIN autor A ON A.id_autor = livro_autor.id_autor
JOIN editora ED ON ED.id_editora = L.id_livro
WHERE A.nome = 'Dan Brown';

-- EXERCÍCIO 05
SELECT L.titulo, A.nome, ED.nome FROM livro L 
JOIN livro_autor ON livro_autor.id_livro = L.id_livro
JOIN autor A ON A.id_autor = livro_autor.id_autor
JOIN editora ED ON ED.id_editora = L.id_livro
WHERE A.nome = 'Dan Brown' AND A.idade = 35;

-- EXERCÍCIO 06
SELECT L.titulo, A.nome, ED.nome FROM livro L 
JOIN livro_autor ON livro_autor.id_livro = L.id_livro
JOIN autor A ON A.id_autor = livro_autor.id_autor
JOIN editora ED ON ED.id_editora = L.id_livro
WHERE A.nome = 'Dan Brown' AND ED.telefone = 123345;

-- EXERCÍCIO 07
SELECT L.titulo, ES.nome FROM livro L
JOIN livro_estilo ON livro_estilo.id_livro = L.id_livro
JOIN estilo ES ON ES.id_estilo = livro_estilo.id_estilo
WHERE ES.nome = 'Romance';

-- EXERCÍCIO 08
SELECT L.titulo, ES.nome FROM livro L
JOIN livro_estilo ON livro_estilo.id_livro = L.id_livro
JOIN estilo ES ON ES.id_estilo = livro_estilo.id_estilo
JOIN editora ED ON ED.id_editora = L.id_editora
WHERE ED.nome = 'Globo';

-- EXERCÍCIO 09
SELECT MAX(L.valor) AS 'Valor' FROM livro L;

-- EXERCÍCIO 10
SELECT MIN(L.valor) AS 'Valor' FROM livro L;

-- EXERCÍCIO 11
SELECT AVG(L.valor) AS 'Media' FROM livro L;

-- EXERCÍCIO 12
SELECT AVG(A.valor_hr) AS 'Media' FROM autor A;

-- EXERCÍCIO 13
SELECT COUNT(L.id_livro) AS 'Quantidade' FROM livro L;

-- EXERCÍCIO 14
SELECT COUNT(L.id_livro) AS 'Quantidade' FROM livro L WHERE L.id_editora = 2;

-- EXERCÍCIO 15
SELECT COUNT(L.id_livro) AS 'Quantidade' FROM livro L 
JOIN livro_estilo ON livro_estilo.id_livro = L.id_livro
JOIN estilo ES ON ES.id_estilo = livro_estilo.id_estilo
WHERE ES.id_estilo = 5;

-- EXERCÍCIO 16
SELECT L.titulo, E.nome FROM livro L
JOIN editora E ON E.id_editora = L.id_editora;

-- EXERCÍCIO 17
SELECT L.titulo, E.nome FROM livro L
JOIN editora E ON E.id_editora = L.id_editora
WHERE E.nome LIKE 'a%';

-- EXERCÍCIO 18
SELECT A.nome FROM autor A 
LEFT JOIN livro_autor ON livro_autor.id_autor = A.id_autor
WHERE livro_autor.id_livro IS NULL;

-- EXERCÍCIO 19
SELECT E.nome FROM editora E 
LEFT JOIN livro L ON L.id_editora = E.id_editora
WHERE L.id_editora IS NULL;

-- EXERCÍCIO 20
SELECT * FROM estilo ES
LEFT JOIN livro_estilo ON livro_estilo.id_estilo = ES.id_estilo
WHERE livro_estilo.id_livro IS NULL;

-- EXERCÍCIO 21
SELECT A.nome, COUNT(A.id_autor) AS 'Quantidade' FROM autor A 
JOIN livro_autor ON livro_autor.id_autor = A.id_autor GROUP BY A.id_autor;

-- EXERCÍCIO 22
SELECT ED.nome, COUNT(ED.id_editora) AS 'Quantidade' FROM editora ED 
JOIN livro L ON L.id_editora = ED.id_editora GROUP BY ED.id_editora;

-- EXERCÍCIO 23
SELECT ES.nome, COUNT(EL.id_livro) AS 'Quantidade' FROM estilo ES 
JOIN livro_estilo EL ON EL.id_estilo = ES.id_estilo GROUP BY ES.nome;

-- EXERCÍCIO 24
SELECT COUNT(L.id_livro) FROM livro L
JOIN editora ED ON L.id_editora = ED.id_editora
WHERE ED.nome = 'CCCC';

-- EXERCÍCIO 25
SELECT COUNT(A.id_autor) AS 'Quantidade' FROM autor A 
JOIN livro_autor ON livro_autor.id_autor = A.id_autor
WHERE A.nome = 'J R R Tolkien';

