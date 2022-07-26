/**
 * @file 1066.c
 * @author michaelthierry86@gmail.com
 * @brief Pares, impares, positivos e negativos: Esse programa lê cinco valores do usuario
 * e no fim mostra quantos foram pares, impares, positivos e negativos.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variveis
    int iterador, soma_positivo, soma_negativo, soma_par, soma_impar, valor;
    //Inicializando variaveis
    soma_impar = soma_negativo = soma_positivo = soma_par = 0;
    //de 0 até 5 faça
    for(iterador = 0; iterador < 5; iterador++){
        //lendo do usuario
        scanf("%i", &valor);
        //avaliando o sinal
        if(valor > 0){
            soma_positivo++;
        }else{
            soma_negativo++;
        }
        //avaliar propriedade
        if((valor % 2) == 0){
            soma_par++;
        }else{
            soma_impar++;
        }
    }
    //Mostrando o resultado
    printf("%i valor(es) par(es)\n", soma_par);
    printf("%i valor(es) impar(es)\n", soma_impar);
    printf("%i valor(es) positivo(s)\n", soma_positivo);
    printf("%i valor(es) negativo(s)\n", soma_negativo);
    //Fim do programa
    return 0;
}