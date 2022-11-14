"""
# Problema: 1118 - Varias notas com validação
"""
# declarando variaveis
notas = 2
total = 0
# laco
while True:
    # confere o numero de notas
    if notas > 0:
        # le do usuario
        nota = float(input())
        # verifica se esta no intervalo
        if nota >= 0 and nota <= 10:
            total += nota
            notas -= 1
        else:
            print("nota invalida")
        # calcula a media se leu as duas notas
        if notas == 0:
            media = total / 2.00
            print("media = {:.2f}".format(media))
    # opcao para fazer ou não um novo calculo
    else:
        print("novo calculo (1-sim 2-nao)")
        # le do usuario
        opcao = int(input())
        # se for sim
        if opcao == 1:
            notas = 2
            total = 0
        # se fro não
        elif opcao == 2:
            break
