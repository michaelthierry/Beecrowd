/**
 * @file 1044.c
 * @author michaelthierry86@gmail.com
 * @brief Multiplos: Esse programa lê dois valores do usuario 
 * e diz se esses valores são multiplos ou não
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int valor_A, valor_B;
    //Lendo do usuario
    scanf("%i %i", &valor_A, &valor_B);
    //Avaliando se os valores são multiplos
    if ((valor_A % valor_B) == 0 || (valor_B % valor_A) == 0){
        //Se forem mostra a mensagem
        printf("Sao Multiplos\n");
    }else{
        //Se não forem mostra a mesagem
        printf("Nao sao Multiplos\n");
    }
    //Fim do programa
    return 0;
}