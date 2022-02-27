/**
 * @file 1006.c
 * @author your name (you@domain.com)
 * @brief Média 2
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main (){

    double valor_A, valor_B, valor_C, media;

    scanf("%lf", &valor_A);
    scanf("%lf", &valor_B);
    scanf("%lf", &valor_C);

    media = (valor_A * 2) + (valor_B * 3) + (valor_C * 5);
    media = media / 10.0;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}