"""
Problema: 1047 - Tempo de jogo com minutos
"""
#lendo os valores
hora_inicio, minuto_inicio, hora_fim, minuto_fim = input().split(" ")
#convertendo para inteiro
hora_inicio = int(hora_inicio)
hora_fim = int(hora_fim)
minuto_inicio = int(minuto_inicio)
minuto_fim = int(minuto_fim)

#calculando
if hora_inicio == hora_fim:
    if minuto_inicio == hora_fim and minuto_fim == hora_fim:
        hora = 24 + minuto_inicio - minuto_fim
        minuto = minuto_inicio - minuto_fim
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio > minuto_fim:
        hora = 24 - hora_inicio + hora_fim - 1
        minuto = 60 - minuto_inicio + minuto_fim
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio < minuto_fim:
        hora = hora_inicio - hora_fim
        minuto = minuto_fim - minuto_inicio
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))

elif hora_inicio > hora_fim:
    if minuto_inicio == minuto_fim:
        hora = 24 - hora_inicio + hora_fim
        minuto = 0
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio > minuto_fim:
        hora = 24 - hora_inicio + hora_fim - 1
        minuto = 60 + minuto_fim - minuto_inicio
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio < minuto_fim:
        hora = 24 - hora_inicio + hora_fim - 1
        minuto = minuto_fim - minuto_inicio
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
else:
    if minuto_fim == minuto_inicio:
        hora = hora_fim - hora_inicio
        minuto = 0
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio > minuto_fim:
        hora = hora_fim - hora_inicio - 1
        minuto = 60 - minuto_inicio + minuto_fim
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
    
    elif minuto_inicio < minuto_fim:
        hora = hora_fim - hora_inicio
        minuto = minuto_fim - minuto_inicio
        print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(hora, minuto))
