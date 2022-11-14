"""
# Problema: 1131 - Grenais
"""
# varaiveis utilizadas
numeroJogos = 0
vitoriaInter = 0
vitoriaGremio = 0
empates = 0
# enquanto
while True:
    # le do usuario
    inter, gremio = input().split(" ")
    # converte para inteiro
    inter = int(inter)
    gremio = int(gremio)
    # confere quem ganhou ou se empatou
    if inter > gremio:
        vitoriaInter += 1
    elif inter < gremio:
        vitoriaGremio += 1
    else:
        empates += 1
    # incrementa o numero de jogos
    numeroJogos += 1
    print("Novo grenal (1-sim 2-nao)")
    # Le do usuario
    opcao = int(input())
    # mostra o resultado e se finaliza
    if opcao == 2:
        print("{} grenais".format(numeroJogos))
        print("Inter:{}".format(vitoriaInter))
        print("Gremio:{}".format(vitoriaGremio))
        print("Empates:{}".format(empates))
        if vitoriaInter > vitoriaGremio:
            print("Inter venceu mais")
        elif vitoriaInter < vitoriaGremio:
            print("Gremio venceu mais")
        else:
            print("Não houve vencedor")
        break

