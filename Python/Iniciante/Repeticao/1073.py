"""
# Problema: 1073 - Quadrado de Pares
"""
#lendo do usuario
valor = int(input())
indice = 1
#Percorendo de um ate o valor digitado
while(indice <= valor):
    if((indice % 2) == 0):
        print("{}^2 = {}".format(indice, indice**2))
        indice += 2
    else:
        indice += 1
