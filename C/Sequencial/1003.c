/**
 * @file 1003.c
 * @author michaelthierry86@gmail.com
 * @brief Soma Simples: Ese programa calcula a soma de dois numeros inteiros
 * Ele le dois valores inteiros do usuario, soma e mostra o resultado na tela 
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Função Principal*/ 
void main(){
    //Declarando variaveis
    int valor_A, valor_B, soma;
    //Lendo do usuario
    scanf("%i", &valor_A);
    scanf("%i", &valor_B);
    //Somando os valores
    soma = valor_A + valor_B;
    //Mostrando o resultado
    printf("SOMA = %i\n", soma);
    
    return 0;
}