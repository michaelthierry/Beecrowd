"""
Problema: 1021 - Notas e moedas
"""
#obtendo os dados
saldo = float(input())
#calculando 
notas = int(saldo)
moedas = int((saldo - notas) * 100)

#calculando as notas
notas_100 = int(notas / 100)
notas %= 100
notas_50 = int(notas / 50)
notas %= 50
notas_20 = int(notas / 20)
notas %= 20
notas_10 = int(notas / 10)
notas %= 10
notas_5 = int(notas / 5)
notas %= 5
notas_2 = int(notas / 2)
notas %= 2
#calculando as moedas
moedas_1 = int(notas)
moedas_50 = int(moedas / 50)
moedas %= 50
moedas_25 = int(moedas / 25)
moedas %= 25
moedas_10 = int(moedas / 10)
moedas %= 10
moedas_5 = int(moedas / 5)
moedas %= 5
moedas_01 = int(moedas / 1)
#mostrando o resultado
print("NOTAS:")
print("{} nota(s) de R$ 100.00".format(notas_100))
print("{} nota(s) de R$ 50.00".format(notas_50))
print("{} nota(s) de R$ 20.00".format(notas_20))
print("{} nota(s) de R$ 10.00".format(notas_10))
print("{} nota(s) de R$ 5.00".format(notas_5))
print("{} nota(s) de R$ 2.00".format(notas_2))
print("MOEDAS:")
print("{} moedas(s) de R$ 1.00".format(moedas_1))
print("{} moedas(s) de R$ 0.50".format(moedas_50))
print("{} moedas(s) de R$ 0.25".format(moedas_25))
print("{} moedas(s) de R$ 0.10".format(moedas_10))
print("{} moedas(s) de R$ 0.05".format(moedas_5))
print("{} moedas(s) de R$ 0.01".format(moedas_01))
