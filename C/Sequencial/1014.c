/**
 * @file 1014.c
 * @author your name (you@domain.com)
 * @brief Consumo
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int distancia;
    float combustivel, consumo;

    scanf("%i", &distancia);
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("%.3f km/l\n", consumo);

    return 0;
}
