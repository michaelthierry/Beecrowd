"""
# Problema: 1113 - Crescente e Decrescente
"""
# laco infinito
while True:
    # lendo o intervalo
    inicio, fim = input().split(" ")
    # convertendo para inteiro
    inicio = int(inicio)
    fim = int(fim)
    # se forem iguais quebra o laco
    if inicio == fim:
        break
    # verificando 
    if inicio < fim:
        print("Crescente")
    else:
        print("Decrescente")
