"""
Problema: 1046 - Tempo de Jogo
"""
#lendo os valores do usuario
horas_inicio, horas_fim = input().split(" ")
#convertendo as horas
horas_inicio = int(horas_inicio)
horas_fim = int(horas_fim)
#calculando
if horas_inicio == horas_fim:
    horas_totais = 24
    print("O JOGO DUROU {} HORA(S)".format(horas_totais))
elif horas_inicio < horas_fim:
    horas_totais = int(horas_fim - horas_inicio)
    print("O JOGO DUROU {} HORA(S)".format(horas_totais))
else:
    horas_totais = 24 - horas_inicio + horas_fim
    print("O JOGO DUROU {} HORA(S)".format(horas_totais))