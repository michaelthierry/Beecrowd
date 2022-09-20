"""
Problema: 1043 - Triangulo
"""
#lendo os valores
lado_A, lado_B, lado_C = input().split(" ")
#convertendo os valores
lado_A = float(lado_A)
lado_B = float(lado_B)
lado_C = float(lado_C)
#Calculando 
if (lado_B - lado_C) < lado_A and lado_A < (lado_B + lado_C):
    if (lado_A - lado_C) < lado_B and lado_B < (lado_A + lado_C):
        if (lado_A - lado_B) < lado_C and lado_C < (lado_A + lado_B):
            perimetro = float(lado_A + lado_B + lado_C)
            print("Perimetro = {:.1f}".format(perimetro))
else:
    area = float(((lado_A + lado_B) / 2.0) * lado_C)
    print("Area = {:.1f}".format(area))
