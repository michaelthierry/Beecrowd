/**
 * @file 1065.c
 * @author michaelthierry86@gmail.com
 * @brief Pares entre cinco: Esse programa lê cinco valores do usuario
 * e conta quantos desses são pares e mostra na tela.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo valores*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int valor, iterador, conta_pares;
    conta_pares = 0;
    //de 0 até 5 faça
    for(iterador = 0; iterador < 5; iterador++){
        //Lendo do usuario
        scanf("%i", &valor);
        //se for par
        if((valor % 2) == 0){
            conta_pares++;
        }
    }
    //Mostra ana tela
    printf("%i valores pares");
    //fim do programa
    return 0;
}