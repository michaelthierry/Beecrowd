/**
 * @file 1004.c
 * @author your name (you@domain.com)
 * @brief Produto Simples
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int valor_A, valor_B, produto;

    scanf("%i", &valor_A);
    scanf("%i", &valor_B);

    produto = valor_A * valor_B;

    printf("PROD = %i\n", produto);

    return 0;
}