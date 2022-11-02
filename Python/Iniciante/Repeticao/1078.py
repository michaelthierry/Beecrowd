"""
# Problema: 1078 - Tabuada
"""
#Lendo do usuario
valor = int(input())

#Fazendo a tabuada
for indice in range(1,11):
    print("{} x {} = {}".format(indice, valor, (valor * indice)))
