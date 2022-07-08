-- Exercicio 01
CREATE DATABASE lista002;
USE lista002;

-- Exercicio 02
CREATE TABLE alunos (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    telefone VARCHAR(50),
    cidade VARCHAR(50) NOT NULL
);

-- Exercicio 03
DESCRIBE alunos;

-- Exercicio 04
CREATE TABLE alunos2 (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(200) NOT NULL,
    telefone VARCHAR(50),
    cidade VARCHAR(100) NOT NULL
);

-- Exercicio 05
CREATE TABLE funcionarios (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    endereco VARCHAR(100) NOT NULL,
    telefone VARCHAR(11),
    cidade VARCHAR(50) NOT NULL,
    estado VARCHAR(2) NOT NULL,
    cep VARCHAR(8),
    rg VARCHAR(20) NOT NULL,
    cpf VARCHAR(11) NOT NULL,
    salario FLOAT
);

-- Exercicio 06
CREATE TABLE fornecedores (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    endereco VARCHAR(100) NOT NULL,
    telefone VARCHAR(11),
    cidade VARCHAR(50) NOT NULL,
    estado VARCHAR(2) NOT NULL,
    cep VARCHAR(8),
    cpf VARCHAR(14) NOT NULL,
    email varchar(50)
);

-- Exercicio 07
CREATE TABLE livros (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    categoria VARCHAR(50) NOT NULL,
    resumo VARCHAR(500),
    preco_custo FLOAT NOT NULL,
    preco_venda FLOAT NOT NULL
);

-- Exercicio 08
DESCRIBE alunos;
DESCRIBE alunos2;
DESCRIBE funcionarios;
DESCRIBE fornecedores;
DESCRIBE livros;

-- Exercicio 09
CREATE TABLE estoque (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_produto VARCHAR(50) NOT NULL,
    categoria VARCHAR(20) NOT NULL,
    quantidade INT NOT NULL,
    fornecedor VARCHAR(100) NOT NULL
);

-- Exercicio 10
CREATE TABLE notas (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome_aluno VARCHAR(50) NOT NULL,
    bimestre INT NOT NULL
);

-- Exercicio 11
CREATE TABLE caixa (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_cad DATE NOT NULL,
    descricao VARCHAR(100) NOT NULL,
    debito FLOAT NOT NULL,
    credito FLOAT NOT NULL
);
CREATE TABLE contas_pagar (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_conta DATE NOT NULL,
    descricao VARCHAR(100) NOT NULL,
    valor FLOAT NOT NULL,
    data_recebimento DATE NOT NULL
);

-- Exercicio 12
CREATE TABLE contas_receber (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    data_conta DATE NOT NULL,
    descricao VARCHAR(100) NOT NULL,
    valor FLOAT NOT NULL,
    data_recebimento DATE NOT NULL
);

-- Exercicio 13
CREATE TABLE filmes (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sinopse VARCHAR(200),
    categoria VARCHAR(20) NOT NULL,
	diretor VARCHAR(50) NOT NULL
);

-- Exercicio 14
CREATE TABLE cds (
	id INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    cantor VARCHAR(50) NOT NULL,
    ano DATE NOT NULL,
	quantidade_musicas INT NOT NULL
);

-- Exercicio 15
DROP TABLE alunos2;

-- Exercicio 16
DESC alunos2;

-- Exercicio 17
DROP TABLE livros;

-- Exercicio 18
DROP TABLE contas_pagar;

-- Exercicio 19
DROP TABLE contas_receber;

-- Exercicio 20
DROP TABLE filmes;

-- Exercicio 21
DESCRIBE funcionarios;
DESCRIBE fornecedores;
DESCRIBE estoque;
DESCRIBE caixa;

-- Exercicio 22
ALTER TABLE alunos RENAME TO super_alunos;

-- Exercicio 23
DESCRIBE super_alunos;

-- Exercicio 24
ALTER TABLE estoque RENAME TO produtos;

-- Exercicio 25
ALTER TABLE notas RENAME TO aprovados;

-- Exercicio 26
ALTER TABLE aprovados RENAME TO notas;

-- Exercicio 27 (POSSUI UM ERRO)

-- Exercicio 28
DROP TABLE notas;

-- Exercicio 29
ALTER TABLE super_alunos RENAME TO alunos;

-- Exercicio 30
ALTER TABLE alunos RENAME TO estudantes;

-- Exercicio 31
ALTER TABLE estudantes RENAME TO super_estudantes;

-- Exercicio 32
DESC super_estudantes;

-- Exercicio 33
DROP TABLE super_estudantes;

-- Exercicio 34
DESC super_estudantes;
DESC alunos;

-- Exercicio 35 (POSSUI ERRO)

-- Exercicio 36 (POSSUI ERRO)

-- Exercicio 37
ALTER TABLE caixa ADD observacao VARCHAR(100);

-- Exercicio 38 (POSSUI ERRO)

-- Exercicio 39
DESC caixa;

-- Exercicio 40
ALTER TABLE caixa ADD saldo FLOAT NOT NULL;