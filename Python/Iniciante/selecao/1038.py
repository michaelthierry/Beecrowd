"""
# Problema: 1038 - Lanche 
"""
#obtendo os dados
codigo, quantidade = input().split(" ")
#convertendo valores
codigo = int(codigo)
quantidade = int(quantidade)
#decidindo a resposta
if codigo == 1:
    valor = float(quantidade * 4.00)
    print("Total: R$ {:.2f}".format(valor))
elif codigo == 2:
    valor = float(quantidade * 4.50)
    print("Total: R$ {:.2f}".format(valor))
elif codigo == 3:
    valor = float(quantidade * 5.00)
    print("Total: R$ {:.2f}".format(valor))
elif codigo == 4:
    valor = float(quantidade * 2.00)
    print("Total: R$ {:.2f}".format(valor))
elif codigo == 5:
    valor = float(quantidade * 1.50)
    print("Total: R$ {:.2f}".format(valor))
