"""
# Problema: 1116 - Dividindo X por Y
"""
# lendo quantidade de casos
quantidade = int(input())
while quantidade > 0:
    # lendo os valores
    valorA, valorB = input().split(" ")
    # conveertendo os valores
    valorA = float(valorA)
    valorB = float(valorB)
    # verifica divisão por zero
    if valorB == 0:
        print("divisao impossivel")
    else:
        print(valorA / valorB)
    # decrementa quantidade
    quantidade -= 1
