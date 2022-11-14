"""
# Problema: 1094 - Experiências
"""
# varaivaies para o problema
sapo, coelho, rato = 0, 0, 0
quantidade = 0
tipo = ''
# Lendo as quantidades de expriencias
experiencia = int(input())
# recolhendo os dados das experiencias
while experiencia != 0:
    # recebendo os dois valores
    quantidade, tipo = input().split(' ')
    # convertendo para inteiro
    quantidade = int(quantidade)
    tipo = tipo.upper()
    # contando a quantidade de cada cobaia
    if tipo == 'C':
        coelho += quantidade
    elif tipo == 'R':
        rato += quantidade
    else:
        sapo += quantidade
    # decrementando as experiencias
    experiencia -= 1
#Calculandoo total
total = sapo + coelho + rato
#Mostrando os resultados
print("Total: {} cobaias".format(total))
print("Total de coelhos: {}".format(coelho))
print("Total de ratos: {}".format(rato))
print("Total de sapos: {}".format(sapo))

print("Percentual de coelhos: {:.2f} %".format((coelho / total) * 100.0))
print("Percentual de ratos: {:.2f} %".format((rato / total) * 100.0))
print("Percentual de sapos: {:.2f} %".format((sapo / total) * 100.0))