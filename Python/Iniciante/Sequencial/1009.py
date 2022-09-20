"""
Problema: 1009 - Salario com Bonus
"""
#declarando variaveis e assumindo valores
nome = str(input())
salario = float(input())
vendas = float(input())
#calculando
vendas = (vendas / 100.0) * 15.0
salario = salario + vendas
#mostrado o resultado
print("TOTAL = R$ {:.2f}".format(salario))
