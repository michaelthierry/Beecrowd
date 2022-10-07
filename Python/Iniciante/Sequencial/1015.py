"""
# Problema: 1015 - Distancia entre dois pontos
"""
#recebendo as entradas
x1, y1 = input().split(" ")
x2, y2 = input().split(" ")
#convetendo valores
x1 = float(x1)
x2 = float(x2)
y1 = float(y1)
y2 = float(y2)
#fazendo o calculo
distancia = (((x2 - x1) ** 2.0) + ((y2 - y1) ** 2.0)) ** 0.5
#mostrando o resultado
print("{:.4f}".format(distancia))
