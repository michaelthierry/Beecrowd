"""
Programa: 1042 - Sort Simples
"""
#lendo os valores
valor_A, valor_B, valor_C = input().split(" ")
#convertendo valores
valor_A = int(valor_A)
valor_B = int(valor_B)
valor_C = int(valor_C)
#mostrando em ordem
if valor_A > valor_B:
    if valor_A > valor_C:
        if valor_B > valor_C:
            print("{}".format(valor_C))
            print("{}".format(valor_B))
            print("{}".format(valor_A))
        else:
            print("{}".format(valor_B))
            print("{}".format(valor_C))
            print("{}".format(valor_A))
    else:
        print("{}".format(valor_B))
        print("{}".format(valor_A))
        print("{}".format(valor_C)) 
else:
    if valor_B > valor_C:
        if valor_A > valor_C:
            print("{}".format(valor_C))
            print("{}".format(valor_A))
            print("{}".format(valor_B))
        else:
            print("{}".format(valor_A))
            print("{}".format(valor_C))
            print("{}".format(valor_B))
    else:
        print("{}".format(valor_A))
        print("{}".format(valor_B))
        print("{}".format(valor_C))
print()
print("{}".format(valor_A))
print("{}".format(valor_B))
print("{}".format(valor_C))