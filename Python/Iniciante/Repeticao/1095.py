"""
# Problema: 1095 - Sequencia IJ 1
"""
valor = 1
# percorrendo o laço
for indice in range(60, -1, -5):
    print("I={} J={}".format(valor, indice))
    valor += 3
