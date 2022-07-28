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
    fk_cargo SMALLINT UNSIGNED,
    CONSTRAINT cargo_candidato FOREIGN KEY (fk_cargo) REFERENCES cargo (cargo_id)
 );
 
 CREATE TABLE eleitor (
	eleitor_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    titulo_eleitor VARCHAR(30) UNIQUE NOT NULL,
    zona_eleitoral CHAR(5) NOT NULL,
    sessao_eleitoral CHAR(5) NOT NULL,
    nome VARCHAR(40) NOT NULL
 );

 CREATE TABLE voto (
	voto_id SMALLINT UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    fk_numero_candidato INT NOT NULL,
    fk_titulo_eleitor VARCHAR(30) UNIQUE NOT NULL,
    CONSTRAINT candidato_voto FOREIGN KEY (fk_numero_candidato) REFERENCES candidato (numero_candidato),
    CONSTRAINT eleitor_voto FOREIGN KEY (fk_titulo_eleitor) REFERENCES eleitor (titulo_eleitor)
 );
 
 ALTER TABLE candidato ADD fk_partido SMALLINT UNSIGNED;
 
 ALTER TABLE candidato ADD CONSTRAINT candidato_partido FOREIGN KEY (fk_partido) REFERENCES partido (partido_id);
 
-- ---------------------- EXERCICIO 03 ----------------------
 
 CREATE DATABASE revendedora_carros;
 
 USE revendedora_carros;
 
 CREATE TABLE automovel (
    renavam VARCHAR(11) PRIMARY KEY,
    placa VARCHAR(10) UNIQUE NOT NULL,
    marca VARCHAR(50) NOT NULL,
    modelo VARCHAR(50) NOT NULL,
    ano_fabricacao YEAR NOT NULL,
    cor VARCHAR(20) NOT NULL,
    motor VARCHAR(50) NOT NULL,
    numero_portas TINYINT NOT NULL,
    tipo_combustivel VARCHAR(10) NOT NULL,
    preco FLOAT NOT NULL
 );
 
 CREATE TABLE clientes (
	clientes_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(50) NOT NULL,
    telefone VARCHAR(11) NOT NULL UNIQUE,
    ender_rua VARCHAR(50) NOT NULL,
    ender_numero INT UNSIGNED NOT NULL,
    ender_complemento VARCHAR(50),
    ender_bairro VARCHAR(50) NOT NULL,
    ender_cidade VARCHAR(50) NOT NULL,
    ender_estado CHAR(2) NOT NULL,
    cep VARCHAR(8)
 );
 
 CREATE TABLE vendedores (
	vendedor_id INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(50) NOT NULL,
    telefone VARCHAR(11) NOT NULL UNIQUE,
    ender_rua VARCHAR(50) NOT NULL,
    ender_numero INT UNSIGNED NOT NULL,
    ender_complemento VARCHAR(50),
    ender_bairro VARCHAR(50) NOT NULL,
    ender_cidade VARCHAR(50) NOT NULL,
    ender_estado CHAR(2) NOT NULL,
    cep VARCHAR(8),
    data_admisao DATE NOT NULL,
    salario INT UNSIGNED NOT NULL
 );
 
 CREATE TABLE venda (
	venda_id INT PRIMARY KEY AUTO_INCREMENT,
    fk_vendedor INT NOT NULL,
    fk_automovel VARCHAR(11) NOT NULL,
    fk_cliente INT NOT NULL,
    data_compra DATE NOT NULL,
    preco FLOAT NOT NULL,
    CONSTRAINT venda_vendedor FOREIGN KEY (fk_vendedor) REFERENCES vendedores (vendedor_id),
    CONSTRAINT venda_automovel FOREIGN KEY (fk_automovel) REFERENCES automovel (renavam),
    CONSTRAINT venda_cliente FOREIGN KEY (fk_cliente) REFERENCES clientes (clientes_id)
 );
 
 
 
 






