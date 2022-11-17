/* criando view */

CREATE oR REPLACE VIEW VW_Empregados
AS 
SELECT e.nome, e.cargo, e.telefone, e.salario 
FROM empregado e, cargo c
WHERE c.descricao = e.cargo


/* chamando view*/
SELECT *
FROM vw_empregados
WHERE cargo = "GERENTE"

/* Atualizando dados a partir da view */

UPDATE vw_empregados
SET salario = salario + 100
WHERE nome = "ANA PAULA";
===================================================

/* criando view */
CREATE oR REPLACE VIEW VW_Clientes
AS 
SELECT c.id, c.nome, c.telefone, c.idrepresentante 
FROM cliente c;

/* chamando view */
SELECT v.nome, v.telefone, r.nome AS nomerepres
FROM VW_Clientes v, representante r
WHERE r.id = v.idrepresentante 
