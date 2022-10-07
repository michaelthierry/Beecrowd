"""
# Problema: 1012 - Área
"""
#pegando os valores
valor_A, valor_B, valor_C = input().split(" ")
#convertendo
valor_A = float(valor_A)
valor_B = float(valor_B)
valor_C = float(valor_C)
#calculando as figuras geometricas
triangulo = (valor_A * valor_C) / 2.0
circulo = (3.14159 * (valor_C ** 2))
quadrado = (valor_B ** 2)
retangulo = (valor_A * valor_B)
trapezio = ((valor_A + valor_B) * valor_C / 2.0)
#Mostrando o reultado
print("TRIANGULO: {:.3f}".format(triangulo))
print("CIRCULO: {:.3f}".format(circulo))
print("TRAPEZIO: {:.3f}".format(trapezio))
print("QUADRADO: {:.3f}".format(quadrado))
print("RETANGULO: {:.3f}".format(retangulo))
