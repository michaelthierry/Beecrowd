"""
# Problema: 1072 - Intervalo 2
"""
#Lendo a quantidade de valores usuario
quantidade = int(input())
dentro = 0
fora = 0
#Pecorendo e lendo do usuário
while (quantidade > 0):
    #Lendo os valores
    valor = int(input())
    #avaliando se o valor esta no intervalo
    if valor >= 10 and valor <= 20:
        dentro += 1
    else:
        fora += 1
    #decrementado a quantidade
    quantidade -= 1
#Mostrando os resultados
print('{} in'.format(dentro))
print('{} out'.format(fora))
