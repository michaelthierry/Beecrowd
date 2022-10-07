"""
# Problema: 1064 - Positivos e Media
"""
#declarando variveis
valores_pares = 0
soma = 0
#laco
for valores in range(6):
    valor = float(input())
    if valor > 0:
        valores_pares += 1
        soma += valor
#calculando a media
media = soma / valores_pares
#mostrando os resultados
print("{} valores positivos".format(valores_pares))
print("{:.1f}".format(media))
