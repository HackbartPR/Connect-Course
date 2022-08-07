CREATE DATABASE ESCOLA;

USE ESCOLA;

CREATE TABLE instrutores (
  id INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  valor_hora INTEGER UNSIGNED NULL,
  certificados VARCHAR(255) NULL,
  PRIMARY KEY(id)
);

CREATE TABLE cursos (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  requisito VARCHAR(255) NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  preco DOUBLE UNSIGNED NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE alunos (
  id INT NOT NULL AUTO_INCREMENT,
  cpf CHAR(11) NOT NULL,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  fone CHAR(14) NOT NULL,
  data_nascimento DATE NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE turmas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  instrutores_id INT NOT NULL,
  cursos_id INTEGER UNSIGNED NOT NULL,
  data_inicio DATE NULL,
  data_final DATE NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  PRIMARY KEY(id),
  INDEX turmas_FKIndex1(cursos_id),
  INDEX turmas_FKIndex2(instrutores_id),
  CONSTRAINT CURSO_TURMA_FK FOREIGN KEY(cursos_id)
    REFERENCES cursos(id),
  CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY(instrutores_id)
    REFERENCES instrutores(id)
);
 
CREATE TABLE matriculas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  turmas_id INTEGER UNSIGNED NOT NULL,
  alunos_id INT NOT NULL,
  data_matricula DATE NULL,
  PRIMARY KEY(id),
  CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY(alunos_id) REFERENCES alunos(id),
  CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY(turmas_id) REFERENCES turmas(id)
);

-- QUESTÃO 01  
INSERT INTO cursos (nome, requisito, carga_horaria, preco) VALUES ('Algoritmos', 'Lógico de Progrmação', 40, 900.00);
INSERT INTO cursos (nome, requisito, carga_horaria, preco) VALUES ('Algoritmos II', 'Algoritmos', 40, 1000.00);
INSERT INTO cursos (nome, requisito, carga_horaria, preco) VALUES ('Algoritmos III', 'Algoritmos II', 40, 1100.00);
INSERT INTO cursos (nome, requisito, carga_horaria, preco) VALUES ('Banco de Dados I', 'Conhecimento em Informática', 40, 900.00);
INSERT INTO cursos (nome, requisito, carga_horaria, preco) VALUES ('Banco de Dados II', 'Banco de Dados I', 40, 1000.00);
SELECT * FROM cursos;

INSERT INTO instrutores (nome, email, valor_hora, certificados) VALUES ('Fulano de Tal', 'fulano@gmail.com', 60, 'Bacharel Ciências da Computação');
INSERT INTO instrutores (nome, email, valor_hora, certificados) VALUES ('Ciclano', 'ciclano@gmail.com', 60, 'Bacharel Engenharia da Computação');
INSERT INTO instrutores (nome, email, valor_hora, certificados) VALUES ('Beltrano', 'beltrano@gmail.com', 60, 'Bacharel Sistemas da Informação');
INSERT INTO instrutores (nome, email, valor_hora, certificados) VALUES ('Carlos', 'carlos@gmail.com', 60, 'Analise e Desenvolvimento de Sistemas');
INSERT INTO instrutores (nome, email, valor_hora, certificados) VALUES ('Lais', 'lais@gmail.com', 60, 'Bacharel Ciências da Computação');
SELECT * FROM instrutores;

INSERT INTO alunos (cpf, nome, email, fone, data_nascimento) VALUES ('14784552766', 'Arturo Vidal', 'vidal@gmail.com', '45991514356', '1996-12-18');
INSERT INTO alunos (cpf, nome, email, fone, data_nascimento) VALUES ('14984252764', 'Gabriel Barbosa', 'gabi_gol@gmail.com', '45991514356', '1995-08-10');
INSERT INTO alunos (cpf, nome, email, fone, data_nascimento) VALUES ('39984156769', 'Thiago Maia', 'thiago@gmail.com', '45991514356', '1992-10-28');
INSERT INTO alunos (cpf, nome, email, fone, data_nascimento) VALUES ('29588156764', 'Arrascaeta', 'arrasca@gmail.com', '45991514357', '1990-10-22');
INSERT INTO alunos (cpf, nome, email, fone, data_nascimento) VALUES ('99588256723', 'João Gomes', 'joao@gmail.com', '41991514320', '1993-03-22');
SELECT * FROM alunos;

INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria) VALUES (1,1,'2022-02-01', '2022-07-30', 6);
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria) VALUES (2,2,'2022-02-01', '2022-07-30', 6);
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria) VALUES (3,3,'2022-02-01', '2022-07-30', 6);
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria) VALUES (4,4,'2022-02-01', '2022-07-30', 6);
INSERT INTO turmas (instrutores_id, cursos_id, data_inicio, data_final, carga_horaria) VALUES (5,5,'2022-02-01', '2022-07-30', 6);
SELECT * FROM turmas;

INSERT INTO matriculas (turmas_id, alunos_id, data_matricula) VALUES (1, 1, '2022-01-10');
INSERT INTO matriculas (turmas_id, alunos_id, data_matricula) VALUES (2, 2, '2022-01-10');
INSERT INTO matriculas (turmas_id, alunos_id, data_matricula) VALUES (3, 3, '2022-01-10');
INSERT INTO matriculas (turmas_id, alunos_id, data_matricula) VALUES (4, 4, '2022-01-10');
INSERT INTO matriculas (turmas_id, alunos_id, data_matricula) VALUES (5, 5, '2022-01-10');
SELECT * FROM matriculas;

-- QUESTÃO 02 
UPDATE instrutores SET nome = 'Fulano' WHERE id = 1;
SELECT (nome) FROM instrutores;

-- QUESTÃO 03 
UPDATE instrutores SET email = 'hackbart@gmail.com' WHERE nome = 'Carlos';
SELECT (email) FROM instrutores;

-- QUESTÃO 04
UPDATE cursos SET nome = 'Algoritmos I' WHERE id = 1;
UPDATE cursos SET requisito = 'Lógica de Programação' WHERE nome = 'Banco de Dados I';
SELECT * FROM instrutores;

-- QUESTÃO 05
UPDATE turmas SET instrutores_id = 2 WHERE cursos_id = 1;
UPDATE turmas SET instrutores_id = 1 WHERE cursos_id = 2;
SELECT * FROM turmas;

-- QUESTÃO 06
DELETE FROM matriculas WHERE id = 5;
DELETE FROM matriculas WHERE id = 4;
SELECT * FROM matriculas;

DELETE FROM turmas WHERE id = 5;
DELETE FROM turmas WHERE id = 4;
SELECT * FROM turmas;

DELETE FROM alunos WHERE id = 5;
DELETE FROM alunos WHERE id = 4;
SELECT * FROM alunos;

DELETE FROM instrutores WHERE id = 5;
DELETE FROM instrutores WHERE id = 4;
SELECT * FROM instrutores;

DELETE FROM cursos WHERE id = 5;
DELETE FROM cursos WHERE id = 4;
SELECT * FROM cursos;






