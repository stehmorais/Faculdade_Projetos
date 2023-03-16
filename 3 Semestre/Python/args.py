# parâmetros por args

def soma_tudo(*numeros):
    soma = 0
    for n in numeros:
        soma = soma + n
        return soma