"""
# Problema 1061 - Tempo de um Evento
"""
#Pegando o primeiro dia
_, dia_1 = input().split(" ")
horas_1, minutos_1, segundos_1 = input().split(":")
#convertendo o primeiro dia
dia_1 = int(dia_1)
horas_1 = int(horas_1)
minutos_1 = int(minutos_1)
segundos_1 = int(segundos_1)
#Pegando o segundo dia
_, dia_2 = input().split(" ")
horas_2, minutos_2, segundos_2 = input().split(":")
#convertendo o segundo dia
dia_2 = int(dia_2)
horas_2 = int(horas_2)
minutos_2 = int(minutos_2)
segundos_2 = int(segundos_2)
#Calculando o Tempo final
segundos_1 += (dia_1 * (24 * 60 *60)) + (horas_1 * (60 * 60)) + (minutos_1 * 60)
segundos_2 += (dia_2 * (24 * 60 *60)) + (horas_2 * (60 * 60)) + (minutos_2 * 60)

segundo_finais = segundos_2  - segundos_1
#Convertendo novamente
dias = int(segundo_finais / 86400)
segundo_finais = segundo_finais % 86400
horas = int(segundo_finais / 3600)
segundo_finais = segundo_finais % 3600
minutos = int(segundo_finais / 60)
segundos = int(segundo_finais % 60)

print("{} dia(s)\n{} hora(s)\n{} minuto(s)\n{} segundo(s)".format(dias, horas, minutos, segundos))
