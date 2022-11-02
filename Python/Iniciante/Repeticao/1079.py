"""
# Problema: 1079 - Médias Ponderadas
"""
#quantidade
quantidade = int(input())
#para cada caso
while quantidade > 0:
    valor1, valor2, valor3 = input().split(" ")

    valor1 = float(valor1)
    valor2 = float(valor2)
    valor3 = float(valor3)

    media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0
    print("{:.1f}".format(media)) 
    #atualizando quantidade
    quantidade -= 1
