-- Script desenvolvido por: Juan, Rebeca, Dhiego, Miguel e Giovanna

-- 1. Criação do Banco de Dados
CREATE DATABASE Pizzaria;
USE Pizzaria;

-- 2. Criação das Tabelas
-- Tabela criada por Juan: Vendas
CREATE TABLE Vendas (
    ID_Venda INT AUTO_INCREMENT PRIMARY KEY,
    Data DATE NOT NULL,
    Cliente VARCHAR(100) NOT NULL,
    Valor_Total DECIMAL(10, 2) NOT NULL
);

-- Tabela criada por Rebeca: Distribuidora
CREATE TABLE Distribuidora (
    ID_Distribuidora INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100) NOT NULL,
    Contato VARCHAR(15),
    Produto_Fornecido VARCHAR(100) NOT NULL
);

-- Tabela criada por Dhiego: Funcionarios
CREATE TABLE Funcionarios (
    ID_Funcionario INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100) NOT NULL,
    Cargo VARCHAR(50) NOT NULL,
    Salario DECIMAL(10, 2) NOT NULL
);

-- Tabela criada por Miguel: Produtos
CREATE TABLE Produtos (
    ID_Produto INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100) NOT NULL,
    Categoria VARCHAR(50),
    Preco DECIMAL(10, 2) NOT NULL
);

-- Tabela criada por Giovanna: Clientes
CREATE TABLE Clientes (
    ID_Cliente INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100) NOT NULL,
    Telefone VARCHAR(15),
    Endereco VARCHAR(255) NOT NULL
);

-- Inserção de registros
INSERT INTO Vendas (Data, Cliente, Valor_Total) VALUES 
('2024-11-01', 'João Silva', 120.50),
('2024-11-02', 'Maria Souza', 85.00),
('2024-11-03', 'Carlos Santos', 150.00),
('2024-11-04', 'Ana Oliveira', 200.75),
('2024-11-05', 'Lucas Lima', 50.00);

INSERT INTO Distribuidora (Nome, Contato, Produto_Fornecido) VALUES 
('Distribuidora A', '123456789', 'Queijo'),
('Distribuidora B', '987654321', 'Massa de Pizza'),
('Distribuidora C', '567890123', 'Molho de Tomate'),
('Distribuidora D', '432198765', 'Presunto'),
('Distribuidora E', '789012345', 'Refrigerantes');

INSERT INTO Funcionarios (Nome, Cargo, Salario) VALUES 
('João Silva', 'Atendente', 1800.00),
('Maria Souza', 'Gerente', 3000.00),
('Carlos Santos', 'Pizzaiolo', 2500.00),
('Ana Oliveira', 'Entregador', 1500.00),
('Lucas Lima', 'Caixa', 2000.00);

INSERT INTO Produtos (Nome, Categoria, Preco) VALUES 
('Pizza Calabresa', 'Pizza', 40.00),
('Pizza Marguerita', 'Pizza', 45.00),
('Refrigerante 2L', 'Bebida', 10.00),
('Pizza Portuguesa', 'Pizza', 50.00),
('Suco Natural', 'Bebida', 8.00);

INSERT INTO Clientes (Nome, Telefone, Endereco) VALUES 
('João Silva', '11987654321', 'Rua A, 123'),
('Maria Souza', '11912345678', 'Rua B, 456'),
('Carlos Santos', '11956789012', 'Rua C, 789'),
('Ana Oliveira', '11943210987', 'Rua D, 101'),
('Lucas Lima', '11965432109', 'Rua E, 202');

-- Alteração de um registro em cada tabela
UPDATE Vendas SET Valor_Total = 130.00 WHERE ID_Venda = 1;
UPDATE Distribuidora SET Contato = '111111111' WHERE ID_Distribuidora = 1;
UPDATE Funcionarios SET Salario = 1900.00 WHERE ID_Funcionario = 1;
UPDATE Produtos SET Preco = 42.00 WHERE ID_Produto = 1;
UPDATE Clientes SET Endereco = 'Rua Nova, 999' WHERE ID_Cliente = 1;

-- Exclusão de um registro em cada tabela
DELETE FROM Vendas WHERE ID_Venda = 5;
DELETE FROM Distribuidora WHERE ID_Distribuidora = 5;
DELETE FROM Funcionarios WHERE ID_Funcionario = 5;
DELETE FROM Produtos WHERE ID_Produto = 5;
DELETE FROM Clientes WHERE ID_Cliente = 5;

-- Alteração na estrutura de uma das tabelas
ALTER TABLE Produtos ADD Estoque INT DEFAULT 0;

-- Conversão de dados na tabela alterada
UPDATE Produtos SET Estoque = 50;

-- Consultas envolvendo apenas uma tabela
SELECT * FROM Vendas WHERE Valor_Total > 100;
SELECT Nome FROM Distribuidora WHERE Produto_Fornecido LIKE '%Queijo%';
SELECT Nome, Salario FROM Funcionarios WHERE Cargo = 'Gerente';
SELECT Nome, Preco FROM Produtos WHERE Categoria = 'Pizza';
SELECT * FROM Produtos WHERE Estoque < 60;
SELECT Nome FROM Clientes WHERE Telefone LIKE '119%';

-- Consultas envolvendo no mínimo duas tabelas
SELECT V.Cliente, V.Valor_Total, P.Nome 
FROM Vendas V
JOIN Produtos P ON P.ID_Produto = 1;

SELECT F.Nome, F.Cargo, D.Nome AS Distribuidora
FROM Funcionarios F
JOIN Distribuidora D ON D.ID_Distribuidora = 2;

SELECT C.Nome, V.Data, V.Valor_Total
FROM Clientes C
JOIN Vendas V ON C.Nome = V.Cliente;

SELECT D.Nome AS Distribuidora, P.Nome AS Produto
FROM Distribuidora D
JOIN Produtos P ON P.ID_Produto = 2;

-- Criação de uma função
DELIMITER $$
CREATE FUNCTION Calcular_Total_Vendas() RETURNS DECIMAL(10, 2)
BEGIN
    DECLARE Total DECIMAL(10, 2);
    SELECT SUM(Valor_Total) INTO Total FROM Vendas;
    RETURN Total;
END$$
DELIMITER ;

-- Criação e execução de uma procedure
DELIMITER $$
CREATE PROCEDURE Adicionar_Estoque(IN ProdutoID INT, IN Quantidade INT)
BEGIN
    UPDATE Produtos SET Estoque = Estoque + Quantidade WHERE ID_Produto = ProdutoID;
END$$
DELIMITER ;

CALL Adicionar_Estoque(1, 10);

-- Criação de um gatilho
DELIMITER $$
CREATE TRIGGER Atualizar_Estoque_Apos_Venda
AFTER INSERT ON Vendas
FOR EACH ROW
BEGIN
    UPDATE Produtos SET Estoque = Estoque - 1 WHERE ID_Produto = 1;
END$$
DELIMITER ;

-- Deleção das tabelas e banco de dados
DROP TABLE Vendas;
DROP TABLE Distribuidora;
DROP TABLE Funcionarios;
DROP TABLE Produtos;
DROP TABLE Clientes;
DROP DATABASE Pizzaria;
