/**
 * @file 1012.c
 * @author your name (you@domain.com)
 * @brief  Área.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define PI 3.14159

int main(){

    double valor_A, valor_B, valor_C;
    double area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    
    scanf("%lf %lf %lf", &valor_A, &valor_B, &valor_C);
    
    area_triangulo = (valor_A * valor_C) / 2;
    area_circulo = PI * (valor_C * valor_C);
    area_trapezio = ((valor_A + valor_B) * valor_C) / 2;
    area_quadrado = valor_B * valor_B;
    area_retangulo = valor_A * valor_B;

    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}