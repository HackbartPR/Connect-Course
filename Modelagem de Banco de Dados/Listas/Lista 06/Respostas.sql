--  ######   LISTA 06   ######
-- EXERCÍCIO 01
SELECT titulo FROM livro ORDER BY titulo ASC;
-- EXERCÍCIO 02
SELECT nome FROM autor ORDER BY nome DESC;
-- EXERCÍCIO 03
SELECT nome, telefone FROM editora;
-- EXERCÍCIO 04
SELECT nome FROM editora;
-- EXERCÍCIO 05
SELECT nome FROM estilo ORDER BY nome DESC;
-- EXERCÍCIO 06
SELECT * FROM estilo WHERE id_estilo = 3;
-- EXERCÍCIO 07
SELECT * FROM autor WHERE id_autor = 1;
-- EXERCÍCIO 08
SELECT * FROM editora WHERE id_editora = 4;
-- EXERCÍCIO 09
SELECT L.titulo, E.nome FROM livro L, editora E WHERE L.id_editora = E.id_editora;
-- EXERCÍCIO 10
SELECT L.titulo, E.nome FROM livro L, editora E WHERE (L.id_editora = E.id_editora) AND (E.nome LIKE 'a%');
-- EXERCÍCIO 11
SELECT L.titulo, ED.nome, ES.nome, A.nome FROM livro L, editora ED, estilo ES, autor A WHERE (L.id_editora = ED.id_editora) AND (L.id_autor = A.id_autor) AND (L.id_estilo = ES.id_estilo);
-- EXERCÍCIO 12
SELECT L.titulo, E.nome FROM livro L, editora E WHERE (L.id_editora = E.id_editora) AND (E.telefone = 123345);
-- EXERCÍCIO 13
SELECT L.titulo, A.nome FROM livro L, autor A WHERE (L.id_autor = A.id_autor) AND (A.idade = 35);
-- EXERCÍCIO 14
SELECT L.titulo, A.nome, E.nome FROM livro L, autor A, editora E WHERE (L.id_editora = E.id_editora) AND (L.id_autor = A.id_autor) AND (A.nome = 'Dan Brown');
-- EXERCÍCIO 15
SELECT L.titulo, A.nome, E.nome FROM livro L, autor A, editora E WHERE (L.id_editora = E.id_editora) AND (L.id_autor = A.id_autor) AND (A.nome = 'Dan Brown') AND (A.idade = 35);
-- EXERCÍCIO 16
SELECT L.titulo, A.nome, E.nome FROM livro L, autor A, editora E WHERE (L.id_editora = E.id_editora AND  L.id_autor = A.id_autor) AND (A.nome = 'Dan Brown' OR E.telefone = 123345);
-- EXERCÍCIO 17
SELECT L.titulo, E.nome FROM livro L, estilo E WHERE L.id_estilo = E.id_estilo AND E.nome = 'Romance';
-- EXERCÍCIO 18
SELECT L.titulo, ES.nome, ED.nome FROM livro L, estilo ES, editora ED WHERE (L.id_estilo = ES.id_Estilo) AND (L.id_editora = ED.id_editora) AND (ED.nome = 'Globo');
-- EXERCÍCIO 19
SELECT L.titulo, E.nome, A.nome FROM livro L, editora E, autor A WHERE (L.id_editora = E.id_editora) AND (L.id_autor = A.id_autor);
