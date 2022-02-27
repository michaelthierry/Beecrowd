/**
 * @file 1011.c
 * @author your name (you@domain.com)
 * @brief Esfera.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

#define PI 3.14159

int main(){

    int raio;
    double volume;

    scanf("%i", &raio);

    volume = (4 / 3.0) * PI * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
