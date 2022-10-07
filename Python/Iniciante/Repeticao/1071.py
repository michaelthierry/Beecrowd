"""
# Problema: 1071 - Soma  de Impares Consecutivos 
"""
#Declarando valores e lendo valores
valor_A = int(input())
valor_B = int(input())
soma_impares = 0
#Fazendo o troca se caso estiver descescente
if valor_A > valor_B:
    auxiliar = valor_B
    valor_B = valor_A
    valor_A = auxiliar

# Percorrendo pelos valores impares 
while valor_A < valor_B:
    if valor_A % 2 == 0:
        valor_A += 1
        soma_impares += valor_A
    else:
        valor_A += 2
        if valor_A < valor_B:
            soma_impares += valor_A
        
# mostrando o resultado
print(soma_impares)

