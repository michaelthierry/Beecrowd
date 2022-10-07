"""
# Problema: 1066 - Pares, Impares, Positivos e Negativos
"""
# declarando variaveis
valores_pares = 0
valores_impares = 0
valores_positivos = 0
valores_negativos = 0
#laco
for valores in range(5):
    valor = int(input())
    if (valor % 2) == 0:
        valores_pares += 1
    else:
        valores_impares += 1
    
    if valor >= 0:
        if valor != 0:
            valores_positivos += 1
    else:
        valores_negativos += 1
#mostrando resultado
print("{} valor(es) par(es)\n{} valor(es) impar(es)\n{} valor(es) positivo(s)\n{} valor(es) negativo(s)".format(valores_pares, valores_impares, valores_positivos, valores_negativos))