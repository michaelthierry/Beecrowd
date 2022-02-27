/**
 * @file 1005.c
 * @author your name (you@domain.com)
 * @brief Média 1.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    double valor_A, valor_B, media;

    scanf("%lf", &valor_A);
    scanf("%lf", &valor_B);

    media = (valor_A * 3.5) + (valor_B * 7.5);
    media = media / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}