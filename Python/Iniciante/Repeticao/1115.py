"""
# Problema: 1115 - Quadrante
"""
# laco infinito
while True:
    # lendo as coordenadas
    x, y = input().split(" ")
    # convertendo
    x = int(x)
    y = int(y)
    #verificando se alguma é zero
    if x == 0 or y == 0:
        break
    # Verifincando os casos
    if x > 0 and y > 0:
        print("primeiro")
    elif x < 0 and y > 0:
        print("segundo")
    elif x < 0 and y < 0:
        print("terceiro")
    else:
        print("quarto")
