"""
Problema: 1040 - Media 3
"""
#Otendo os dados
nota_1, nota_2, nota_3, nota_4 = input().split(" ")
#Convertendo os valores
nota_1 = float(nota_1)
nota_2 = float(nota_2)
nota_3 = float(nota_3)
nota_4 = float(nota_4)
#calculando
media = float(((nota_1 * 2.0) + (nota_2 * 3.0) + (nota_3 * 4.0) + nota_4) / 10.0)
#Mostrando a media
print("Media: {:.1f}".format(media))
#Decidindo resposta
if media >= 7.0:
    print("Aluno aprovado.")
elif media >= 5.0:
    print("Aluno em exame.")
    exame = float(input())
    print("Nota do exame: {:.1f}".format(exame))
    if ((exame + media) / 2.0) > 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    nova_media = (exame + media) / 2.0
    print("Media final: {:.1f}".format(nova_media))
else:
    print("Aluno reprovado.")
