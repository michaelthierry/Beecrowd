"""
Problema: 1014 - Consumo 
"""
#declarando vairiaveis
distancia = float(input())
combustivel_gasto = float(input())
#fazendo o calculo
consumo = distancia / combustivel_gasto
#mostrando o resultado 
print("{:.3f} km/l".format(consumo))
