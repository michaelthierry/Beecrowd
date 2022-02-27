/**
 * @file 1017.c
 * @author your name (you@domain.com)
 * @brief Gasto De Combustivel
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    int tempo,velocidade;
    double litros;

    scanf("%i", &tempo);
    scanf("%i", &velocidade);

    litros = ((velocidade * tempo) / 12);

    printf("%.3f\n", litros);
    
    return 0;
}