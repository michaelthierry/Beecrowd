"""
Problema: 1008 - Salario
"""
#declarando variaveis e assumindo valores
numero_funcionario = int(input())
numero_horas = int(input())
salario = float(input())
#Calculando
salario = salario * numero_horas
#mostrando o resultado
print("NUMBER = {}".format(numero_funcionario))
print("SALARY = U$ {:.2f}".format(salario))
