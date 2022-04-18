/**
 * @file 1037.c
 * @author your name (you@domain.com)
 * @brief Intervalo
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    float valor_A;

    scanf("%f", &valor_A);

    if (valor_A >= 0 && valor_A <= 25){
        printf("Intervalo [0,25]\n");

    }else if(valor_A > 25 && valor_A <= 50){
        printf("Intervalo (25,50]\n");

    }else if(valor_A > 50 && valor_A <= 75){
        printf("Intervalo (50,75]\n");

    }else if(valor_A > 75 && valor_A <= 100){
        printf("Intervalo (75,100]\n");

    }else{
        printf("Fora de intervalo\n");
    }
    return 0;
}