"""
# Problema: 1075 - Resto 2
"""
#Lendo do usuário
valor = int(input())
#De valor até 10000
for index in range(10000):
    if index % valor == 2:
        print(index)
    