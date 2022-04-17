/**
 * @file 1013.c
 * @author your name (you@domain.com)
 * @brief O maior.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor_A, valor_B, valor_C, primeiro_maior, ultimo_maior;

    scanf("%i %i %i", &valor_A, &valor_B, &valor_C);

    primeiro_maior = (valor_A + valor_B + abs(valor_A - valor_B)) / 2;
    ultimo_maior = (primeiro_maior + valor_C + abs(primeiro_maior - valor_C)) / 2;

    printf("%i eh o maior\n", ultimo_maior);

    return 0;
}