create database controledelivrosFinal;
use controledelivrosFinal;

create table autor(
id_autor int primary key,
nome varchar(50) not null,
idade int,
valor_hr decimal(10,2) not null
);

create table editora(
id_editora int primary key,
nome varchar(50) not null,
telefone varchar(12)
);

create table estilo(
id_estilo int primary key,
nome varchar(50) not null
);

create table livro(
id_livro int primary key,
titulo varchar(50) not null,
id_editora int not null,
valor decimal(10,2),
constraint fk_livro_editora foreign key (id_editora) references editora(id_editora)
);

create table livro_autor(
	id_autor int not null,
    id_livro int not null,
    primary key(id_autor,id_livro),
    foreign key (id_autor) references autor(id_autor),
    foreign key (id_livro) references livro(id_livro)
);

create table livro_estilo(
	id_estilo int not null,
    id_livro int not null,
    primary key(id_estilo,id_livro),
    foreign key (id_livro) references livro(id_livro),
    foreign key (id_estilo) references estilo(id_estilo)
);

insert into editora values
(1,'Abril','12334567'),
(2,'Globo','123345'),
(3,'Saraiva','1233451212'),
(4,'BBBBB','123345'),
(5,'CCCC','12334521312'),
(6,'EEEE','12334521312'),
(7,'FFF','12334521312'),
(8,'GGGG','12334521312');

insert into autor values
(1,'Paulo Coelho',70,120.3),
(2,'Agatha Christie',50,120.3),
(3,'J K Rowling',70,120.3),
(4,'Dan Brown',35,120.3),
(5,'J R R Tolkien',70,120.3),
(6,'João Abreu',25,5.3),
(7,'Pedro Maria',35,20.3);

insert into estilo values
(1,'Comédia'),
(2,'Drama'),
(3,'Ficção'),
(4,'Suspense'),
(5,'Romance'),
(6,'Ação'),
(7,'Terror');

insert into livro values
(1,'Livro - 123',1,1.5),
(2,'Livro - 234',2,2.5),
(3,'Livro - 333',3,5.5),
(4,'Livro - 444',4,12.5),
(5,'Livro - 555',5,15.5),
(6,'Livro - 566',5,20.5),
(7,'Livro - 544',5,10.5),
(8,'Livro - 666',5,15.5),
(9,'Livro - 777',5,20.5);

insert into livro_autor values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(2,6),
(5,7),
(5,8),
(5,9);

insert into livro_estilo values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(5,6),
(2,7),
(2,8),
(2,9);

