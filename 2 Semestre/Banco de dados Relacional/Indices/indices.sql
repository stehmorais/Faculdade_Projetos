/* indice unico */
CREATE INDEX numero ON agenda_indexada (numero(4))

SELECT SQL_NO_CACHE * 
FROM agenda
WHERE ddd=19 AND numero= 6287;

SELECT SQL_NO_CACHE * 
FROM agenda_indexada 
WHERE ddd=19 AND numero= 6287;

/* composto */
CREATE INDEX idx_cliente
ON cliente(nome,tipo)

/* index com chave unica */
CREATE UNIQUE INDEX idx_produto
ON produto (descricao)



