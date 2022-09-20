"""
Problema 1060 - Numeros Positivos
"""
valor_par = 0
#laço
for valores in range(6):
    valor = float(input())
    if valor > 0:
        valor_par += 1
#Mostrando a mensagem
print("{} valores positivos".format(valor_par))
