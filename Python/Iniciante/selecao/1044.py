"""
Problema: 1044 - Multiplos
"""
#Lendo valores
valor_A, valor_B = input().split(" ")
#Convertendo os valores
valor_A = int(valor_A)
valor_B = int(valor_B)
#Calculando
if (valor_A % valor_B) == 0 or (valor_B % valor_A) == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")
