/*CREATE TABLE agencia(
	id_agencia INT auto_increment,
    nome VARCHAR(100),
    endereco VARCHAR(100),
    PRIMARY KEY (id_agencia)
);

CREATE TABLE funcionario(
	id_funcionario INT auto_increment,
    id_agencia INT,
    nome VARCHAR(100),
    cpf CHAR(11),
    endereco VARCHAR(100),
    salario DECIMAL(8,2),
    PRIMARY KEY (id_funcionario),
    FOREIGN KEY (id_agencia) REFERENCES agencia(id_agencia)
);

CREATE TABLE cliente(
	id_cliente INT auto_increment,
    id_agencia int,
    nome VARCHAR(100),
    cpf CHAR(11),
    endereco VARCHAR(100),
    telefone CHAR(10),
    data_adesao date,
    PRIMARY KEY(id_cliente),
    FOREIGN KEY (id_agencia) REFERENCES agencia(id_agencia)
    );
    
CREATE TABLE conta(
	id_conta INT auto_increment,
    id_cliente INT,
    tipo CHAR(1),
    data_abertura DATE,
    saldo DECIMAL(11,2),
    limite DECIMAL(8,2),
    PRIMARY KEY (id_conta),
    FOREIGN KEY (id_conta) REFERENCES cliente(id_cliente)
);

CREATE TABLE operacao(
	id_operacao INT auto_increment,
    id_conta int,
    tipo CHAR(1),
    data_operacao DATETIME,
    valor DECIMAL(11,2),
    PRIMARY KEY (id_operacao),
    FOREIGN KEY (id_conta) REFERENCES conta(id_conta)
);

ALTER TABLE agencia 
	ADD codigo VARCHAR(10)
		AFTER id_agencia;
        
	SELECT * FROM agencia;
    
	ALTER TABLE conta 
		MODIFY limite DECIMAL(7,2);
		
    ALTER TABLE conta 
		 MODIFY data_abertura DATETIME
		  AFTER tipo;
          
	SELECT * FROM conta;
    
    ALTER TABLE cliente DROP COLUMN telefone;
    
    DROP TABLE funcionario;*/