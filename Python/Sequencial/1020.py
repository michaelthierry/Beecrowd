"""
Problema: 1020 - Idade em Dias
"""
#Ontendo os dados
dias_totais = int(input())
#calculando
anos = int(dias_totais / 365)
meses = int((dias_totais - (365 * anos)) / 30)
dias = int((dias_totais - (365 * anos) - (meses * 30)))
#mostrando o resultado
print("{} ano(s)".format(anos))
print("{} mes(es)".format(meses))
print("{} dia(s)".format(dias))
