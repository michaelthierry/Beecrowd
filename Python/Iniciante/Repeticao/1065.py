"""
# Problema: 1065 - Pares entre cinco numeros
"""
#declarando variaveis
valores_pares = 0
#laco
for valores in range(5):
    valor = int(input())
    if(valor % 2 == 0):
        valores_pares += 1
#mostrando o resultado
print("{} valores pares".format(valores_pares))
