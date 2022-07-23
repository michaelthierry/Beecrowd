/**
 * @file 1004.c
 * @author michaelthierry86@gmail.com
 * @brief Produto Simples: Esse Programa calcula o produto entre dois numeros inteiros
 * Ele le dois valores inteiros do usuario, calcula o produto entre eles e mostra o 
 * resultado na tela 
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int valor_A, valor_B, produto;
    //Lendo do usuario
    scanf("%i", &valor_A);
    scanf("%i", &valor_B);
    //Calculando o produto
    produto = valor_A * valor_B;
    //Mostrando o resultado na tela
    printf("PROD = %i\n", produto);

    return 0;
}