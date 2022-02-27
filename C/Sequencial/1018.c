/**
 * @file 1018.c
 * @author your name (you@domain.com)
 * @brief Cédulas.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int saldo, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1;

    scanf("%i", &saldo);
    
    printf("%i\n", saldo);

    notas_100 = saldo / 100;
    saldo %= 100;
    notas_50 = saldo / 50;
    saldo %= 50;
    notas_20 = saldo / 20;
    saldo %= 20;
    notas_10 = saldo / 10;
    saldo %= 10;
    notas_5 = saldo / 5;
    saldo %= 5;
    notas_2 = saldo / 2;
    saldo %= 2;
    notas_1 = saldo / 1;

    printf("%i nota(s) de R$ 100,00\n", notas_100);
    printf("%i nota(s) de R$ 50,00\n", notas_50);
    printf("%i nota(s) de R$ 20,00\n", notas_20);
    printf("%i nota(s) de R$ 10,00\n", notas_10);
    printf("%i nota(s) de R$ 5,00\n", notas_5);
    printf("%i nota(s) de R$ 2,00\n", notas_2);
    printf("%i nota(s) de R$ 1,00\n", notas_1);
    
    return 0;
}