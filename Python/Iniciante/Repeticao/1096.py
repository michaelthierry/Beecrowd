"""
# Problema: 1096 - Sequencia IJ 2
"""
# Laço externo
for fora in range(1, 10, 2):
    # Laço interno
    for dentro in range(7, 4, -1):
        print("I={} J={}".format(fora, dentro))
