-- ---------------------- EXERCICIO 01 ----------------------
CREATE DATABASE clinica;

USE clinica;

CREATE TABLE sala (
	sala_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    numero_sala SMALLINT NOT NULL UNIQUE CHECK(numero_sala >= 1 AND numero_sala <= 50),
    andar SMALLINT NOT NULL UNIQUE CHECK(andar < 12)
);

CREATE TABLE medicos (
	medicos_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
	crm VARCHAR(15) NOT NULL UNIQUE,
    nome VARCHAR(40) NOT NULL,
    idade TINYINT UNSIGNED CHECK(idade > 23),
    especialidade CHAR(20) NOT NULL DEFAULT 'Ortopedia',
    cpf VARCHAR(15) UNIQUE NOT NULL,
    data_admissao DATE
);

CREATE TABLE pacientes (
	pacientes_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    rg VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE,
    cidade CHAR(30) DEFAULT 'Itabuna',
    doenca VARCHAR(40) NOT NULL,
    plano_saude VARCHAR(40) NOT NULL DEFAULT 'SUS'
);

CREATE TABLE funcionarios (
	funcionarios_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    matricula VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE NOT NULL,
    data_admissao DATE NOT NULL,
    cargo VARCHAR(40) NOT NULL DEFAULT 'Assistente Médico',
    salario FLOAT NOT NULL DEFAULT 510.00
);

CREATE TABLE consultas (
	consultas_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    codigo_consulta SMALLINT UNSIGNED UNIQUE NOT NULL,
    data_horario DATETIME
);

ALTER TABLE sala ADD fk_medicos SMALLINT NOT NULL;

ALTER TABLE sala ADD CONSTRAINT fk_medicos FOREIGN KEY (fk_medicos) REFERENCES medicos (medicos_id);

ALTER TABLE consultas ADD fk_medicos SMALLINT NOT NULL;

ALTER TABLE consultas ADD CONSTRAINT medicos_consultas FOREIGN KEY (fk_medicos) REFERENCES medicos (medicos_id);

ALTER TABLE consultas ADD fk_pacientes SMALLINT NOT NULL;

ALTER TABLE consultas ADD CONSTRAINT consultas_pacientes FOREIGN KEY (fk_pacientes) REFERENCES pacientes (pacientes_id);

-- ---------------------- EXERCICIO 02 ----------------------
CREATE DATABASE eleicao;

USE eleicao;

CREATE TABLE cargo (
	cargo_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    codigo_cargo INT UNIQUE NOT NULL,
    nome_cargo VARCHAR(30) UNIQUE NOT NULL CHECK(nome_cargo != 'Prefeito' OR nome_cargo != 'Vereador'),
    salario FLOAT NOT NULL DEFAULT 17000.00,
    numero_vagas INT UNIQUE NOT NULL
);

CREATE TABLE partido (
	partido_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    codigo_partido INT UNIQUE NOT NULL,
    sigla CHAR(5) UNIQUE NOT NULL,
    nome VARCHAR(40) UNIQUE NOT NULL,
    numero INT UNIQUE NOT NULL
);

 CREATE TABLE candidato (
 	candidato_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    numero_candidato INT UNIQUE NOT NULL,
    nome VARCHAR(40) UNIQUE NOT NULL,
    
 );






