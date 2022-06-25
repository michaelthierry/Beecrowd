"""
Problema: 1019 - Conversão de Tempo
"""
#recebendo os dados
segundos_totais = int(input())
#calculando
horas = int(segundos_totais / 3600)
minutos = int((segundos_totais - (3600 * horas)) / 60)
segundos = int((segundos_totais - (3600 * horas) - (minutos * 60)))
#mostrando o resultado
print("{}:{}:{}".format(horas, minutos, segundos))
