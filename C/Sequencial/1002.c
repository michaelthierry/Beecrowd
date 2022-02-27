/**
 * @file 1002.c
 * @author your name (you@domain.com)
 * @brief Area do Circulo.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define PI 3.14159

int main(){

    double area_do_circulo ;

    scanf("%lf", &area_do_circulo);

    area_do_circulo = PI * (area_do_circulo * area_do_circulo);

    printf("A=%.4f\n", area_do_circulo);

    return 0;
}
