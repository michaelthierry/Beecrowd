"""
# Problema: 1067 - Numeros Impares
"""
#recebendo o valor 
valor = int(input())
iterador = 0
#laco
while iterador <= valor:
    if iterador % 2 != 0:
        print(iterador)
    iterador += 1
