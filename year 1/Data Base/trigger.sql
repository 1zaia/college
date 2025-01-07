11 - CREATE TRIGGER trg_aumentar_salario_dependente
AFTER INSERT ON Dependente
FOR EACH ROW
BEGIN
    UPDATE Empregado
    SET salario = salario * 1.10
    WHERE cod_empregado = NEW.cod_empregado;
END;

12 - CREATE TRIGGER trg_diminuir_salario_dependente
AFTER DELETE ON Dependente
FOR EACH ROW
BEGIN
    UPDATE Empregado
    SET salario = salario * 0.90
    WHERE cod_empregado = OLD.cod_empregado;
END;

13 - CREATE TRIGGER trg_impedir_exclusao_depto
BEFORE DELETE ON Depto
FOR EACH ROW
BEGIN
    DECLARE v_qtd_empregados INT;

    SELECT COUNT(*) INTO v_qtd_empregados
    FROM Empregado
    WHERE cod_depto = OLD.cod_depto;

    IF v_qtd_empregados > 0 THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Não é possível excluir este departamento, pois há funcionários cadastrados.';
    END IF;
END;

14 - CREATE TRIGGER trg_registrar_data_insercao_dependente
AFTER INSERT ON Dependente
FOR EACH ROW
BEGIN
    INSERT INTO LogDependentes (cod_dependente, data_insercao)
    VALUES (NEW.cod_dependente, NOW());
END;