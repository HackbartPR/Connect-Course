CREATE DATABASE HackbartBD;
USE HackbartBD;

CREATE TABLE pessoas (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    nascimento DATE
);

INSERT INTO pessoas (nome, nascimento) VALUES ('Carlos Guilherme','1996-12-18');

SELECT * FROM pessoas;

INSERT INTO pessoas (nome, nascimento) VALUES ('Diego Oliveira','1995-09-28');

ALTER TABLE pessoas ADD cpf VARCHAR(11) NOT NULL AFTER nascimento;

UPDATE pessoas SET cpf='14784552766' WHERE id=1;

UPDATE pessoas SET cpf='14597826492' WHERE id=2;

DESCRIBE pessoas;

DROP TABLE pessoas;

DROP DATABASE hackbartbd;
