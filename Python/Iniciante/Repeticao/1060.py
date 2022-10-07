"""
# Problema 1060 - Numeros Positivos
"""
valores_positivos = 0
#laço
for valores in range(6):
    valor = float(input())
    if valor > 0:
        valores_positivos += 1
#Mostrando a mensagem
print("{} valores positivos".format(valores_positivos))
