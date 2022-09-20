"""
Problema: 1041 - Coordenadas de um ponto
"""
#lendo o ponto
x, y = input().split(" ")
#convertendo valores
x = float(x)
y = float(y)
#definido a resposta
if x > 0:
    if y > 0:
        print("Q1")
    elif y < 0:
        print("Q4")
    else:
        print("Eixo X")
elif x < 0:
    if y > 0:
        print("Q2")
    elif y < 0:
        print("Q3")
    else:
        print("Eixo X")
elif x == 0:
    if (y > 0) or (y < 0):
        print("Eixo Y")
    else:
        print("Origem")

