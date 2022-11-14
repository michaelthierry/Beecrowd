"""
# Problema: 1114- Senha Fixa
"""
# laco infinito
while True:
    # Lendo a senha
    senha = int(input())
    # verificando
    if senha == 2002:
        print("Acesso Permitido")
        break
    else:
        print("Senha Invalida")
