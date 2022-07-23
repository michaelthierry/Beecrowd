/**
 * @file 1013.c
 * @author michaelthierry86@gmail.com
 * @brief O maior: Esse programa lê tres valores do usuario e mostra qual deles
 * é o maior
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int valor_A, valor_B, valor_C, maior;
    //Lendo do usuario
    scanf("%i %i %i", &valor_A, &valor_B, &valor_C);
    //Calculando o maior
    maior = (valor_A + valor_B + abs(valor_A - valor_B)) / 2;
    maior = (maior + valor_C + abs(maior - valor_C)) / 2;
    //Mostrando o maior
    printf("%i eh o maior\n", maior);

    return 0;
}