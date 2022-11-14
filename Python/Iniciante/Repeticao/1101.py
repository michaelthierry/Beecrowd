"""
# Problema: 1101 - Sequência de Numeros e Soma
"""
# laco infinito
while True:
    # Lendo o intervalo
    inicio, fim = input().split(" ")
    # convertendo para inteiro
    inicio = int(inicio)
    fim = int(fim)
    # se algum for zero ou menor sai do laco
    if inicio <= 0 or fim <= 0:
        break
    # troca se estiver invertido
    if inicio > fim:
        aux = inicio
        inicio = fim
        fim = aux
    # laco de somatorio
    soma = 0
    while inicio <= fim:
        soma += inicio
        # Imprimindo e linha
        print(inicio, end=" ")
        inicio += 1
    # Mostra a soma total
    print("Sum={}".format(soma))
