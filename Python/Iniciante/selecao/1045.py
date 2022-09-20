"""
Programa: 1045 - Sort Simples
"""
#lendo os valores
valor_A, valor_B, valor_C = input().split(" ")
#convertendo valores
valor_A = float(valor_A)
valor_B = float(valor_B)
valor_C = float(valor_C)
#mostrando em ordem
if valor_A > valor_B:
    if valor_A > valor_C:
        if valor_B > valor_C:
            pass
        else:
            auxiliar = float(valor_C)
            valor_C = valor_B
            valor_B = auxiliar
    else:
        auxiliar = float(valor_C)
        valor_C = valor_B
        valor_B = valor_A
        valor_A = auxiliar
else:
    if valor_B > valor_C:
        if valor_A > valor_C:
            auxiliar = float(valor_B)
            valor_B = valor_A
            valor_A = auxiliar
        else:
            auxiliar = float(valor_B)
            valor_B = valor_C
            valor_C = valor_A
            valor_A = auxiliar
    else:
        auxiliar = float(valor_C)
        valor_C = valor_A
        valor_A = auxiliar
if valor_A >= (valor_B + valor_C):
    print("NAO FORMA TRIANGULO")
else:
    soma_quadrados = (valor_B ** 2.0) + (valor_C ** 2.0)
    quadrado_A = (valor_A ** 2.0)

    if quadrado_A == soma_quadrados:
        print("TRIANGULO RETANGULO")
    if quadrado_A > soma_quadrados:
        print("TRIANGULO OBTUSANGULO")
    if quadrado_A < soma_quadrados:
        print("TRIANGULO ACUTANGULO")
    if (valor_A == valor_B) and (valor_B == valor_C):
        print("TRIANGULO EQUILATERO")
    if ((valor_A == valor_B) and (valor_A != valor_C)) or ((valor_A == valor_C) and (valor_A != valor_B)) or ((valor_B == valor_C) and (valor_B != valor_A)):
        print("TRIANGULO ISOSCELES")
