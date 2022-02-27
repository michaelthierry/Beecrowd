/**
 * @file 1007.c
 * @author your name (you@domain.com)
 * @brief Diferença.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int valor_A, valor_B, valor_C, valor_D, diferenca;

    scanf("%i", &valor_A);
    scanf("%i", &valor_B);
    scanf("%i", &valor_C);
    scanf("%i", &valor_D);

    diferenca = (valor_A * valor_B) - (valor_C * valor_D);

    printf("DIFERENCA = %i\n", diferenca);

    return 0;
}