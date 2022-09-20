"""
Problema 1018 - Cédulas
"""
#recebendo o valor
saldo = int(input())
#mostrando o saldo recebido
print("{}".format(saldo))
#calculando as notas
notas_100 = int(saldo / 100)
saldo %= 100
notas_50 = int(saldo / 50)
saldo %= 50
notas_20 = int(saldo / 20)
saldo %= 20
notas_10 = int(saldo / 10)
saldo %= 10
notas_5 = int(saldo / 5)
saldo %= 5
notas_2 = int(saldo / 2)
saldo %= 2
notas_1 = int(saldo / 1)

print("{} nota(s) de R$ 100,00".format(notas_100))
print("{} nota(s) de R$ 50,00".format(notas_50))
print("{} nota(s) de R$ 20,00".format(notas_20))
print("{} nota(s) de R$ 10,00".format(notas_10))
print("{} nota(s) de R$ 5,00".format(notas_5))
print("{} nota(s) de R$ 2,00".format(notas_2))
print("{} nota(s) de R$ 1,00".format(notas_1))
