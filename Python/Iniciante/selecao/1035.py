"""
# Problema: teste de Seleção 1
"""
#coletando os dados
valor_A, valor_B, valor_C, valor_D = input().split(" ")
#convertendo os valores
valor_A = int(valor_A)
valor_B = int(valor_B)
valor_C = int(valor_C)
valor_D = int(valor_D)
#fazendo o calculo de decisao
if valor_B > valor_C:
    if valor_D > valor_A:
        if (valor_C + valor_D) > (valor_A + valor_B):
            if (valor_C > 0) and (valor_D > 0):
                if (valor_A % 2) == 0:
                    print("Valores aceitos")
                else:
                    print("Valores não aceitos")
            else:
                print("Valores não aceitos")
        else:
            print("Valores não aceitos")
    else:
        print("Valores não aceitos")
else:
    print("Valores não aceitos")