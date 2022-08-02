CREATE DATABASE livraria;

USE livraria;

CREATE TABLE editora (
	editora_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL
);

CREATE TABLE livro (
	livro_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    qtd_paginas INT,
    editora_id INT NOT NULL,
    CONSTRAINT livro_editora FOREIGN KEY (editora_id) REFERENCES editora (editora_id)
);

CREATE TABLE autor (
	autor_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    contato VARCHAR(50)
);

CREATE TABLE livro_autor (
	id INT PRIMARY KEY AUTO_INCREMENT,
	autor_id INT NOT NULL,
    livro_id INT NOT NULL,
    valor INT NOT NULL,
    CONSTRAINT livroautor_autor FOREIGN KEY (autor_id) REFERENCES autor (autor_id),
    CONSTRAINT livroautor_livro FOREIGN KEY (livro_id) REFERENCES livro (livro_id)
);

CREATE TABLE categoria (
	categoria_id INT PRIMARY KEY AUTO_INCREMENT,
    descricao VARCHAR(50) NOT NULL
);

CREATE TABLE livro_categoria (
	id INT PRIMARY KEY AUTO_INCREMENT,
    livro_id INT NOT NULL,
    categoria_id INT NOT NULL,
    CONSTRAINT livrocategoria_livro FOREIGN KEY (livro_id) REFERENCES livro (livro_id),
    CONSTRAINT livrocategoria_categoria FOREIGN KEY (categoria_id) REFERENCES categoria (categoria_id)
);

INSERT INTO editora (nome) VALUES ("Editora Rocco");
INSERT INTO editora (nome) VALUES ("Editora Suma");

INSERT INTO livro (nome, qtd_paginas, editora_id) VALUES ("Pequeno Príncipe", 300, 1);
INSERT INTO livro (nome, qtd_paginas, editora_id) VALUES ("Deus Não Joga Dados Com Universo", 250, 2);

INSERT INTO autor (nome, contato) VALUES ("Carlos Hackbart", "45991514356");
INSERT INTO autor (nome, contato) VALUES ("Henri Laborit", "51985858342");

INSERT INTO categoria (descricao) VALUES ("Infantil");
INSERT INTO categoria (descricao) VALUES ("Auto Ajuda");

INSERT INTO livro_autor (autor_id, livro_id, valor) VALUES (1, 1, 40000);
INSERT INTO livro_autor (autor_id, livro_id, valor) VALUES (2,2,60000);
INSERT INTO livro_autor (autor_id, livro_id, valor) VALUES (2,1,20000);

INSERT INTO livro_categoria (livro_id, categoria_id) VALUES (1,1);
INSERT INTO livro_categoria (livro_id, categoria_id) VALUES (1,2);
INSERT INTO livro_categoria (livro_id, categoria_id) VALUES (2,2);

UPDATE editora SET nome = "Editora Hackbart" WHERE editora_id = 1;

UPDATE livro SET qtd_paginas = 350 WHERE livro_id = 1;

UPDATE categoria SET descricao = "Fantasia" WHERE categoria_id = 1;

UPDATE autor SET nome = "Carlos" WHERE autor_id = 1;

SELECT * FROM livro_categoria;
DELETE FROM livro_categoria WHERE id = 1;
DELETE FROM livro_categoria WHERE id = 2;

SELECT * FROM livro_autor;
DELETE FROM livro_autor WHERE id = 1;
DELETE FROM livro_autor WHERE id = 3;

SELECT * FROM livro;
DELETE FROM livro WHERE livro_id = 1;

SELECT * FROM autor;
DELETE FROM autor WHERE autor_id = 1;






