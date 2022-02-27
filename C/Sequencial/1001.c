/**
 * @file 1001.c
 * @author your name (you@domain.com)
 * @brief Extremamente Basico.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int primeiro_valor, segundo_valor, valor_x;

    scanf("%i", &primeiro_valor);
    scanf("%i", &segundo_valor);

    valor_x = primeiro_valor + segundo_valor;

    printf("X = %i\n", valor_x);

    return 0;
}