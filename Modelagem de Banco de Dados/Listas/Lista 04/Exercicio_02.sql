CREATE DATABASE ESCOLA;

USE ESCOLA;

CREATE TABLE professores (
	professor_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
	nome VARCHAR(100) NOT NULL,
    contato VARCHAR(50) NOT NULL
);

CREATE TABLE aulas (
	aula_id INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    fk_professor SMALLINT UNSIGNED NOT NULL, 
    CONSTRAINT aulas_professores FOREIGN KEY (fk_professor) REFERENCES professores (professor_id)
);

CREATE TABLE turma (
	turma_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    capacidade TINYINT NOT NULL
);

CREATE TABLE alunos (
	alunos_id INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    contato VARCHAR(50) NOT NULL,
    fk_turma SMALLINT UNSIGNED,
    CONSTRAINT alunos_turma FOREIGN KEY (fk_turma) REFERENCES turma (turma_id)
);

CREATE TABLE professores_turma (
	id INT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    fk_professor SMALLINT UNSIGNED NOT NULL,
    fk_turma SMALLINT UNSIGNED NOT NULL,
    data_inicio TIMESTAMP NOT NULL,
    CONSTRAINT professorTurma_professor FOREIGN KEY (fk_professor) REFERENCES professores (professor_id),
    CONSTRAINT professorTurma_turma FOREIGN KEY (fk_turma) REFERENCES turma (turma_id)
);

INSERT INTO professores (nome, contato) VALUES ('Carlos Guilherme', '45991514356');
INSERT INTO professores (nome, contato) VALUES ('Lais Joaquim', '45991254394');

INSERT INTO turma (nome, capacidade) VALUES ('5º Serie A', 45);
INSERT INTO turma (nome, capacidade) VALUES ('8º Serie B', 45);

INSERT INTO aulas (nome, fk_professor) VALUES ('Matemática', 1);
INSERT INTO aulas (nome, fk_professor) VALUES ('Química', 2);

INSERT INTO alunos (nome, contato, fk_turma) VALUES ('Matheus Hackbart', '279345059382', 1);
INSERT INTO alunos (nome, contato, fk_turma) VALUES ('Cristhian Joaquim', '499345059389', 2);

INSERT INTO professores_turma (fk_professor, fk_turma, data_inicio) VALUES (1, 1, '2022-08-01 10:00:00');
INSERT INTO professores_turma (fk_professor, fk_turma, data_inicio) VALUES (2, 2, '2022-08-01 09:00:00');


