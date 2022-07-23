"""
Problema: 1017 - Gasto de Comnustivel
"""
#pegando os dados
tempo = int(input())
velocidade = int(input())
#calculando
gasto = float((tempo * velocidade) / 12.0)
#mostrando o resultado
print("{:.3f}".format(gasto))
