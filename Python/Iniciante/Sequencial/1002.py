"""
# Problema 1002 - Area do circulo
"""
#defindo o PI
PI = 3.14159
#Pegando o valor do usuario
raio = float(input())
#calculando a area
area = PI * (raio ** 2)
#Mostrando o resultado na tela
print("A={:.4f}".format(area))