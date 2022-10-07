"""
# Problema: 1070 - Seis numeros Impares
"""
#lendo o valores e declarando variveis
valor = int(input())
quantidade = 0
#percorrendo os numeros impares
while quantidade <= 5:
    if valor % 2 != 0:
        print(valor)
        valor += 2
        quantidade += 1
    else:
        valor += 1
