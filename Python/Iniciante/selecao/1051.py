"""
Problema: 1051 - Imposto de Renda
"""
#lendo valores
ganho = float(input())
#calculando
if ganho > 0.0 and ganho <= 2000.00:
    print("Isento")
elif ganho > 2000.00 and ganho <= 3000.00:
    ganho -= 2000.00
    imposto = (ganho * 0.08)
    print("R$ {:.2f}".format(imposto))
elif ganho > 3000.01 and ganho <= 4500.00:
    ganho -= 3000.00
    imposto = ganho * 0.18 + (1000 * 0.08)
    print("R$ {:.2f}".format(imposto))
else:
    ganho -= 4500.00
    imposto = ganho * 0.28 + ((4500 - 3000) * 0.18) + (1000 * 0.08)
    print("R$ {:.2f}".format(imposto))
