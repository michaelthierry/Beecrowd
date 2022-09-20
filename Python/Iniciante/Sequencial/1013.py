"""
Problema: 1013 - O maior
"""
#lendo do usuario
valor_A, valor_B, valor_C = input().split(" ")
#convertendo valores
valor_A = int(valor_A)
valor_B = int(valor_B)
valor_C = int(valor_C)
#calculando 
valor_AB = int((valor_A + valor_B + abs(valor_A  - valor_B)) / 2)
valor_AC = int((valor_AB + valor_C + abs(valor_AB - valor_C)) / 2)
#Mostrando o resultado
print("{} eh o maior".format(valor_AC))
