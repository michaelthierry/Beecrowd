/**
 * @file 1042.c
 * @author your name (you@domain.com)
 * @brief Sort simples
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//CODE 1042//SORT SIMPLES//
#include <stdio.h>
int main(){
    int valor_A, valor_B, valor_C;

    scanf("%i %i %i", &valor_A, &valor_B, &valor_C);

    if((valor_A > valor_B && valor_C) && valor_B > valor_C){
        printf("%i\n", valor_C);
        printf("%i\n", valor_B);
        printf("%i\n", valor_A);

    }else if((valor_A > valor_B && valor_A > valor_C) && valor_B < valor_C){
        printf("%i\n", valor_B);
        printf("%i\n", valor_C);
        printf("%i\n", valor_A);

    }else if(valor_B > valor_A && valor_A > valor_C){
        printf("%i\n", valor_C);
        printf("%i\n", valor_A);
        printf("%i\n", valor_B);

    }else if((valor_B > valor_C && valor_B > valor_A) && valor_A < valor_C){
        printf("%i\n", valor_A);
        printf("%i\n", valor_C);
        printf("%i\n", valor_B);

    }else if(valor_C > valor_A && valor_A > valor_B){
        printf("%i\n", valor_B);
        printf("%i\n", valor_A);
        printf("%i\n", valor_C);

    }else if(valor_C > valor_A && valor_C > valor_B && valor_A < valor_B){
        printf("%i\n", valor_A);
        printf("%i\n", valor_B);
        printf("%i\n", valor_C);

    }
    
    printf("\n");
    printf("%i\n", valor_A);
    printf("%i\n", valor_B);
    printf("%i\n", valor_C);
    
    return 0;
}
