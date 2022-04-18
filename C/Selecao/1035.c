/**
 * @file 1035.c
 * @author your name (you@domain.com)
 * @brief teste de Seleção 1
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
 
int main() {
 
    int valor_A, valor_B, valor_C, valor_D;

    scanf("%d %d %d %d", &valor_A, &valor_B, &valor_C, &valor_D);

    if(valor_B > valor_C){
        if(valor_D > valor_A){
            if((valor_C + valor_D) > (valor_A + valor_B)){
                if((valor_C > 0) && (valor_D > 0)){
                    if((valor_A % 2) == 0){
                        printf("Valores aceitos\n");
                    }else{
                        printf("Valores nao aceitos\n");
                    }
                }else{
                    printf("Valores nao aceitos\n");
                }
            }else{
                printf("Valores nao aceitos\n");
            }
        }else{
            printf("Valores nao aceitos\n");
        }
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}