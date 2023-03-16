# Usando valores default

def quebra_substring(string_maior, string_quebra=':'):
    return string_maior.split(string_quebra)

quebra_substring('oi mundo', ' ') #Funciona
quebra_substring('oi:mundo:teste', ' ') #Funciona
quebra_substring('oi:mundo:teste') #Funciona

