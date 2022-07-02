"""
Problema: 1048 - Aumento de salario
"""
#lendo os valores
salario = float(input())
#calculando
if salario > 0 and salario <= 400.00:
    ganho = float((salario / 100.0) * 15.0)
    salario = salario + ganho
    print("Novo salario: {:.2f}".format(salario))
    print("Reajuste ganho: {:.2f}".format(ganho))
    print("Em percentual: 15 %")
elif salario > 400.00 and salario <= 800.00:
    ganho = float((salario / 100.0) * 12.0)
    salario = salario + ganho
    print("Novo salario: {:.2f}".format(salario))
    print("Reajuste ganho: {:.2f}".format(ganho))
    print("Em percentual: 12 %")
elif salario > 800.00 and salario <= 1200.00:
    ganho = float((salario / 100.0) * 10.0)
    salario = salario + ganho
    print("Novo salario: {:.2f}".format(salario))
    print("Reajuste ganho: {:.2f}".format(ganho))
    print("Em percentual: 10 %")
elif salario > 1200.00 and salario <= 2000.00:
    ganho = float((salario / 100.0) * 7.0)
    salario = salario + ganho
    print("Novo salario: {:.2f}".format(salario))
    print("Reajuste ganho: {:.2f}".format(ganho))
    print("Em percentual: 7 %")
elif salario > 2000.00:
    ganho = float((salario / 100.0) * 4.0)
    salario = salario + ganho
    print("Novo salario: {:.2f}".format(salario))
    print("Reajuste ganho: {:.2f}".format(ganho))
    print("Em percentual: 4 %")
