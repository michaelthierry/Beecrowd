/**
 * @file 1038.c
 * @author your name (you@domain.com)
 * @brief Lanche
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    int codigo, quantidade;
    float total;

    scanf("%i %i", &codigo, &quantidade);

    if(codigo == 1){
        total = quantidade * 4.00;
        printf("Total: R$ %.2f\n", total);

    }else if(codigo == 2){
        total = quantidade * 4.50;
        printf("Total: R$ %.2f\n", total);
    
    }else if(codigo == 3){
        total = quantidade * 5.00;
        printf("Total: R$ %.2f\n", total);

    }else if(codigo == 4){
        total = quantidade * 2.00;
        printf("Total: R$ %.2f\n", total);

    }else if(codigo == 5){
        total = quantidade * 1.50;
        printf("Total: R$ %.2f\n", total);

    }
    return 0;
}