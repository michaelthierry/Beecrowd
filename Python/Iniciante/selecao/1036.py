"""
# Problema: 1036 - Formula de Bhaskara
"""
#recebendo o valores
valor_A, valor_B, valor_C = input().split(" ")
#convertendo os valores
valor_A = float(valor_A)
valor_B = float(valor_B)
valor_C = float(valor_C)
#calculando 
delta = float(valor_B ** 2) - 4.0 * valor_A * valor_C
raiz = (delta ** 0.5)
#decidindo
if delta < 0 or valor_A == 0:
    print("Impossivel calcular")
else:
    x1 = float((-valor_B + raiz) / (2.0 * valor_A))
    x2 = float((-valor_B - raiz) / (2.0 * valor_A))
    #mostrando o resultado
    print("R1 = {:.5f}".format(x1))
    print("R2 = {:.5f}".format(x2))
