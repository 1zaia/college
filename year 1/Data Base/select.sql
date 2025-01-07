SELECT nome, funcao
FROM funcionarios;

SELECT *
FROM produto
ORDER BY preco DESC;

SELECT nome
FROM funcionarios
ORDER BY data_inicio ASC;

SELECT nome_ingredientes
FROM ingredientes
WHERE nome_ingredientes LIKE 'A%';

SELECT * 
FROM pedidos
WHERE status <> 'Entregue';

SELECT * 
FROM cliente;

SELECT nome, CPF 
FROM cliente;

SELECT nome 
FROM distribuidora 
WHERE CNPJ = 12345678901234;

SELECT * 
FROM ingredientes 
WHERE num_fornecedor = 1;

SELECT nome 
FROM funcionario 
WHERE funcao = 'Gerente';

SELECT * 
FROM produto 
WHERE num_ingrediente = 2;

SELECT * 
FROM pedidos 
WHERE CPF_cliente = 12345678900;

SELECT COUNT(*) 
FROM produto 
WHERE num_ingrediente = 3;

SELECT nome 
FROM funcionario 
WHERE data_nasc < 19800101;

SELECT * 
FROM produto 
ORDER BY num_produto ASC;

SELECT nome 
FROM cliente 
WHERE adress LIKE '%Rua%';

SELECT * 
FROM produto 
WHERE num_ingrediente <> 2;

SELECT nome 
FROM cliente 
WHERE CPF > 50000000000;

SELECT * 
FROM produto 
WHERE num_ingrediente < 10;

SELECT COUNT(*) 
FROM funcionario 
WHERE funcao = 'Caixa';

SELECT num_ped, pedido 
FROM pedidos 
WHERE CPF_cliente = 12345678900;

SELECT nome 
FROM distribuidora 
WHERE num_fornecedor > 100;

SELECT nome 
FROM distribuidora 
WHERE num_fornecedor > 100;

SELECT nome 
FROM funcionario 
WHERE data_nasc > 19900101;

SELECT adress 
FROM cliente 
WHERE adress LIKE '%Avenida%';
