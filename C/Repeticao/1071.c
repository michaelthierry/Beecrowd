/**
 * @file 1071.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Soma de Impares Consecutivos 1: Esse programa lê dois valores do usuário e soma todos os
 * impares consecutivos entre eles e mostra o resultado.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*função principal*/
int main(){
    //Declarando variaveis
    int primeiro_valor, segundo_valor, iterador, soma_impares;
    //incializando variaveis
    iterador = 0;
    soma_impares = 0;
    //Lendo do usuario
    scanf("%i", &primeiro_valor);
    scanf("%i", &segundo_valor);
    //troca os valores se estiver decrescente
    if(primeiro_valor > segundo_valor){
        int auxiliar;
        auxiliar = segundo_valor;
        segundo_valor = primeiro_valor;
        primeiro_valor = auxiliar;
    }
    //Até serem iguais
    while(primeiro_valor < segundo_valor){
        //Se o primeiro for par
        if((primeiro_valor % 2) == 0){
            primeiro_valor++;
            soma_impares += primeiro_valor;
        }else{
            primeiro_valor += 2;
            soma_impares += primeiro_valor;
        }
    }
    //Mostrado o resultado
    printf("%i\n", soma_impares);
    //Fim do programa
    return 0;
}