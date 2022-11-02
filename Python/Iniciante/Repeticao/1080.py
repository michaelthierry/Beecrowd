"""
# Problema: 1080 - Maior Posição
"""
# Lendo 100 valores
maior = 0
posicao = 0
for index  in range(1, 101):
    valor = int(input())
    if valor > maior:
        maior = valor
        posicao = index

print("{}\n{}".format(maior, posicao))
