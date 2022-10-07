"""
# Problema: 1010 - Calculo simples
"""
#dados da peca 1
codigo_peca_1, numero_peca_1, valor_peca_1 = input().split(" ")
#dados da peca 2
codigo_peca_2, numero_peca_2, valor_peca_2 = input().split(" ")
#convertendo para os tipos
codigo_peca_1 = int(codigo_peca_1)
numero_peca_1 = int(numero_peca_1)
valor_peca_1 = float(valor_peca_1)

codigo_peca_2 = int(codigo_peca_2)
numero_peca_2 = int(numero_peca_2)
valor_peca_2 = float(valor_peca_2)
#calculando
valor_total = (numero_peca_1 * valor_peca_1) + (numero_peca_2 * valor_peca_2)
#mostrando o resultando
print("VALOR A PAGAR: R$ {:.2f}".format(valor_total))
