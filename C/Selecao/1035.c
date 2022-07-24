/**
 * @file 1035.c
 * @author michaelthierry86@gmail.com
 * @brief teste de Seleção 1: Esse programa lê quatro valores inteiros do usuário
 * Se o segundo for maior que o terceiro e
 * Se o quarto for maior que o primero e
 * Se a soma do terceiro com o quarto for maior que
 * a soma do Primeiro o segundo e 
 * Se o terceiro e o quarto forem ambos positivos e 
 * Se o primeiro  for par: mostra a mensagem "valores aceitos" se não for mostra "valores nao aceitos"
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função Principal*/ 
int main() {
    //Declarando variaveis
    int valor_A, valor_B, valor_C, valor_D;
    //Lendo do usuario
    scanf("%d %d %d %d", &valor_A, &valor_B, &valor_C, &valor_D);
    //Fazendo verificação
    if((valor_B > valor_C) && (valor_D > valor_A)){//se (b > c) e (d > a)
        
        if((valor_C + valor_D) > (valor_A + valor_B)){//se (c + d) > (a + b)
            
            if((valor_C > 0) && (valor_D > 0)){//se c e d > 0
                
                if((valor_A % 2) == 0){//se a é par
                    //Mostra mensagem na tela
                    printf("Valores aceitos\n");
                    //Fim do programa
                    return 0;
                }
            }
        }
    }
    //Mostra mensagem se não atender as condições
    printf("Valores nao aceitos\n");
    return 0;
}