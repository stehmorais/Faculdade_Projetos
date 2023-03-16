# Python orientado a objeto

class PrimeiraClasse:
    pass # palavra reservada para criar uma classe "passar"

objeto1 = PrimeiraClasse() # instância de primeira classe

class SegundaClasse:
    def imprime_1(self, parametro1):
        print(parametro1)

objeto2 = SegundaClasse()

isinstance(objeto2.PrimeiraClasse) # false
isinstance(objeto1.PrimeiraClasse) # true

objeto2.imprime_1([1,2,3])

objeto1.nome = 'Ester'
print(objeto1.nome)

type(objeto1)

objeto1.__dict__ # atributos do objeto

# Construtor

class TerceiraClasse:
    def __init__(self, *args,**kwargs):
        self.param1 = args
        self.param2 = kwargs

objeto3 = TerceiraClasse()
objeto3.__dict__ # vai dar param1 () e param2 ()
objeto4 = TerceiraClasse(1,2,3,4,nome='Fatec Araras')


        
