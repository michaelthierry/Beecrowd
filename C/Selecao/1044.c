/**
 * @file 1044.c
 * @author your name (you@domain.com)
 * @brief Multiplos
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
int main(){
    int valor_A, valor_B;
    scanf("%i %i", &valor_A, &valor_B);

    if ((valor_A % valor_B) == 0 || (valor_B % valor_A) == 0){
        printf("Sao Multiplos\n");

    }else{
        printf("Nao sao Multiplos\n");

    }

    return 0;
}