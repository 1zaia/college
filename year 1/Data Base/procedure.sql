1 - CREATE TABLE Depto (
    cod_depto INT PRIMARY KEY,
    nome VARCHAR(50)
);

CREATE TABLE Empregado (
    cod_empregado INT PRIMARY KEY,
    cod_depto INT, nome VARCHAR(50), dt_nascimento DATE,
    sexo CHAR(1), dt_admissao DATE, est_civil CHAR(1),
    salario NUMERIC(10,2),
    FOREIGN KEY (cod_depto) REFERENCES Depto(cod_depto)
);

CREATE TABLE Dependente (
    cod_dependente INT PRIMARY KEY,
    cod_empregado INT, nome VARCHAR(50),
    dt_nascimento DATE, sexo CHAR(1),
    FOREIGN KEY (cod_empregado) REFERENCES Empregado(cod_empregado)
);

2 - INSERT INTO Depto (cod_depto, nome)
    VALUES (1, 'Departamento de Vendas');


	NSERT INTO Empregado (cod_empregado, cod_depto, nome, dt_nascimento, sexo, dt_admissao, est_civil, salario)
	ALUES (1, 1, 'João da Silva', '1990-01-01', 'M', '2023-01-01', 'C', 5000.00);

3 - CREATE PROCEDURE sp_relatorio_salarial (
    @cod_depto INT
)
AS
BEGIN

    DECLARE @soma_salarios DECIMAL(10,2),
            @media_salarios DECIMAL(10,2),
            @maior_salario DECIMAL(10,2),
            @menor_salario DECIMAL(10,2);

    SELECT @soma_salarios = SUM(salario)
    FROM Empregado
    WHERE cod_depto = @cod_depto;

    SELECT @media_salarios = AVG(salario)
    FROM Empregado
    WHERE cod_depto = @cod_depto;

    SELECT @maior_salario = MAX(salario)
    FROM Empregado
    WHERE cod_depto = @cod_depto;

    SELECT @menor_salario = MIN(salario)
    FROM Empregado
    WHERE cod_depto = @cod_depto;

    SELECT @soma_salarios AS SomaSalarios,
           @media_salarios AS MediaSalarios,
           @maior_salario AS MaiorSalario,
           @menor_salario AS MenorSalario;
END;

4 - CREATE PROCEDURE sp_relatorio_funcionarios (
    @nome_depto VARCHAR(50)
)
AS
BEGIN

    DECLARE @qtd_masculinos INT,
            @qtd_femininos INT;

    SELECT @qtd_masculinos = COUNT(*)
    FROM Empregado e
    JOIN Depto d ON e.cod_depto = d.cod_depto
    WHERE d.nome = @nome_depto AND e.sexo = 'M';

    SELECT @qtd_femininos = COUNT(*)
    FROM Empregado e
    JOIN Depto d ON e.cod_depto = d.cod_depto
    WHERE d.nome = @nome_depto AND e.sexo = 'F';

    SELECT @qtd_masculinos AS QtdMasculinos,
           @qtd_femininos AS QtdFemininos;
END;

5 - CREATE PROCEDURE InsertDepartamento (
    @codigo INT,
    @nome VARCHAR(50)
)
AS
BEGIN
    INSERT INTO Departamento (codigo, nome)
    VALUES (@codigo, @nome);
END;

6 - CREATE PROCEDURE UpdateSalarioFeminino
AS
BEGIN
    UPDATE Empregados
    SET salario = salario * 1.05
    WHERE sexo = 'F';
END;

7 - CREATE PROCEDURE UpdateSalarioMasculino (
    @percentual DECIMAL(4, 2)
)
AS
BEGIN
    UPDATE Empregados
    SET salario = salario * (1 + @percentual/100)
    WHERE sexo = 'M';
END;

8 - CREATE TABLE Sexo (
    id_sexo INT PRIMARY KEY,
    descricao_sexo VARCHAR(20) NOT NULL
);


INSERT INTO Sexo (id_sexo, descricao_sexo) VALUES
(1, 'Masculino'),
(2, 'Feminino');

ALTER TABLE Empregados
ADD COLUMN id_sexo INT;

UPDATE Empregados
SET id_sexo = CASE 
WHEN sexo = 'Masculino' THEN 1
WHEN sexo = 'Feminino' THEN 2
ELSE NULL  
END;

ALTER TABLE Empregados
ADD CONSTRAINT FK_Empregados_Sexo FOREIGN KEY (id_sexo) REFERENCES Sexo(id_sexo);

9 - CREATE TABLE EstadoCivil (
    id_estado_civil INT PRIMARY KEY,
    descricao_estado_civil VARCHAR(50) NOT NULL
);


INSERT INTO EstadoCivil (id_estado_civil, descricao_estado_civil) VALUES
(1, 'Solteiro(a)'),
(2, 'Casado(a)'),
(3, 'Divorciado(a)'),
(4, 'Viúvo(a)');

ALTER TABLE Empregados
ADD COLUMN id_estado_civil INT;


UPDATE Empregados
SET id_estado_civil = CASE
WHEN estado_civil = 'Solteiro' THEN 1
WHEN estado_civil = 'Casado' THEN 2
                        
ELSE NULL
END;

ALTER TABLE Empregados
ADD CONSTRAINT FK_Empregados_EstadoCivil FOREIGN KEY (id_estado_civil) REFERENCES EstadoCivil(id_estado_civil);

10 - CREATE PROCEDURE CalcularMediaSalarialPorDepartamento
AS
BEGIN
    SELECT d.nome, AVG(e.salario) AS media_salarial
    FROM Empregados e
    JOIN Departamento d ON e.departamento_id = d.codigo
    GROUP BY d.nome;
END;