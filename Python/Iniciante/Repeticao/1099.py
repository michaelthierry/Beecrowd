"""
# Problema: 1099 - Soma de Impares Consecutivos II
"""
# numero de testes
numeroTestes = int(input())
#laco
while numeroTestes > 0:
    # pegando intervalo
    inicio , fim = input().split(" ")
    # convertendo para inteiro
    inicio = int(inicio)
    fim = int(fim)
    # Se os valores estiverem trocados
    if inicio > fim:
        aux = inicio
        inicio = fim
        fim = aux
    # se o incio for maior que o fim
    if inicio < fim:
        soma = 0
        inicio += 1

        while inicio < fim:
            if(inicio % 2) != 0:
                soma += inicio
            inicio += 1
        print(soma)

    else:
        soma = 0
        print(soma)
    #atualizando o teste
    numeroTestes -= 1
