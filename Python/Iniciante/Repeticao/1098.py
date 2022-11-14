"""
# Problema: 1098 - Sequencia IJ 4
"""
# variavel de controle
fora = 0.0
# laço externo
while(fora <= 2.0):
    # variavel de controle
    dentro = 1.0
    # Laco interno
    while(dentro <= 3.0):
        # Calcula o total
        total = fora + dentro
        # verifica o valor do laco de fora 
        if fora == 0.0 or fora == 1.0:
            print("I={:.0f} J={:.0f}".format(fora, total))
        # verifica o valor de total
        elif total == 3.0 or total == 4.0 or total == 5.0 :
            print("I={:.0f} J={:.0f}".format(fora, total))
        # caso não
        else:
            print("I={:.1f} J={:.1f}".format(fora, (fora + dentro)))
        # atualiza variavel de controle interno
        dentro+=1.0
    # atualiza a variavel de controle externo
    fora += 0.2
