/**
 * @file 1043.c
 * @author your name (you@domain.com)
 * @brief Triangulo
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    float valor_A, valor_B, valor_C;
    scanf("%f %f %f", &valor_A, &valor_B, &valor_C);

    if (((valor_B - valor_C) < valor_A) && (valor_A < (valor_B + valor_C))){

            if(((valor_A - valor_C) < valor_B) && (valor_B < (valor_A + valor_C))){

                    if(((valor_A - valor_B) < valor_C) && (valor_C < (valor_A + valor_B))){
                        printf("Perimetro = %.1f\n", valor_A + valor_B + valor_C);

                    }
            }
    }else{
        printf("Area = %.1f\n",((valor_A + valor_B) / 2) * valor_C);

    }
    return 0;
}