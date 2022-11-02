"""
# Problema: 1074 - Par ou Ímpar
"""
#quantidade de valores
quantidade = int(input())
#percorrendo pelos numeros
while quantidade > 0:
    #Conferindo do usuario
    valor = int(input())
    #verificando se é apar ou impar
    if valor == 0:
        print("NULL")
    elif valor % 2 == 0:
        if valor > 0:
            print("EVEN POSITIVE")
        else:
            print("EVEN NEGATIVE")
    else:
        if valor > 0:
            print("ODD POSITIVE")
        else:
            print("ODD NEGATIVE")

    #quantidade decrementa
    quantidade -= 1
