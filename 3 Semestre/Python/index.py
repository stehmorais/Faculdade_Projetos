import keyword
print(keyword.kwlist)

print("Primeiro comando")
print("Segundo comando")
print("Terceiro comando")

condicao = False 

if condicao:
    print("passou por aqui")

condicao = True

if condicao:
    print("Passou no if falso")

#for

a = [1,2,3,4,5,6,7,8,9,10]

for numero in a:
    print(numero)

#funcao
def caixinha_magica(numero1, numero2):
    numero_magico = numero1 + numero2
    return numero_magico

print(caixinha_magica(2,5))

print(caixinha_magica('oi','mundo'))


def caixinha_magica2(parametro1, parametro2):
    retorno_magico = parametro1 - parametro2
    return retorno_magico

assert caixinha_magica2(10,4) == 6
assert caixinha_magica2(10,5) == 5

nome1 = 'fatec araras'
print(id(nome1))

lista = [] #criando lista

lista.append('Pão') #adicionando objeto a lista
lista.append('Bacon')
lista.append(2)

print(lista)

for comida in lista: #for para procurar na lista
    print(comida)

lista2 = []
lista2.append('Chocolate')
lista2.append('Banana')
lista.append('Mamão')

lista2.pop() #remove o ultimo objeto da lista
lista.remove('Mamão') #remove objeto especifico

for comida in lista2:
    print(comida.upper()) #imprime tudo em capslock

#Tuplas - N é para mexer, geralmente imutáveis

tupla1 = ('Pão', 'Bacon', 'Chocolate', 'Chocolate')
print (tupla1)

tupla1.count('Chocolate')
tupla1.index('Bacon')

print(tupla1.count('Chocolate'))
print(tupla1.index('Bacon'))

#transformando tupla em lista 

lista3 = list(tupla1) 
print(lista3)

#transformando lista em tupla
x = tuple(lista)

print(x)

lista4 = []

for item in lista:
    if type (item) == str:
        lista4.append(item)
print(lista4)

#range

r = range(1,15)
print(list(r))

r = range(1,15,2)
print(list(r))

#desafio - se o resultado da subtração dos dois numeros for negativo, retorna 0 se não, retorna o valor da subtração

def caixinha_magica3(numb, numb2):
    if numb - numb2 > 1: 
        return numb - numb2
    else:
        return 0

assert caixinha_magica3(20, 15) == 5
assert caixinha_magica3(20, 10) == 10
assert caixinha_magica3(10, 10) == 0
assert caixinha_magica3(10, 15) == 0
assert caixinha_magica3(30, 45) == 0

print(caixinha_magica3(30 , 45))

