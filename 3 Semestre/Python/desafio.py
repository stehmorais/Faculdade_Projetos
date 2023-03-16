def soma_tudo(*numeros):
    soma = 0
    for n in numeros:
        soma = soma + n
        if type(n) == int:
            return soma
        else:
            print("não são numeros inteiros")


soma_tudo(10,20) # Passou
soma_tudo(0.5,20) # Não Passou


'''

Outra solução com lista

def soma_tudo(*numeros):
    resultado = 0
    for numero in numeros:
        if isinstance(numero, int):
            resultado == numero
            return resultado

def soma_tudo(*numeros):
    lista = []
    for n in numeros:
        if type(n) == int:
            lista.append(n)
            return sum(lista)
        else:
            print("não são numeros inteiros")

soma_tudo(10,20) # Passou
soma_tudo(0.5,10) # Não vai passar

'''