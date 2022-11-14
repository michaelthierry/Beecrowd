"""
# Problema: 1117 - Validação de notas
"""
# deifinido variaveis
notas = 2
total = 0
# laço
while True:
    # confere as notas
    if notas > 0:
        # le do usuario
        nota = float(input())
        # confere a nota dada
        if nota >= 0 and nota <= 10:
            total += nota
            notas -= 1
        else:
            print("nota invalida")
    else:
        break
# calculando a media
media = total / 2.00
# mostrando o resultado
print("media = {:.2f}".format(media))
