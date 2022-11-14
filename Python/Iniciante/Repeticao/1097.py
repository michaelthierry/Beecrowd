"""
# Problema: 1097 - Sequencia IJ 3
"""
valor = 7
# Laço externo
for fora in range(1, 10, 2):
    # Laço interno
    for dentro in range(valor, valor-3, -1):
        print("I={} J={}".format(fora, dentro))
    valor += 2
