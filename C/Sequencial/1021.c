/**
 * @file 1021.c
 * @author your name (you@domain.com)
 * @brief Notas e moedas
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    double saldo;
    int notas, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
    int moedas, moedas_1, moedas_050, moedas_025, moedas_010, moedas_005, moedas_001;

    scanf("%lf", &saldo);

    notas = saldo;
    moedas = (saldo - notas) * 100;
    printf("moedas: %i\n", moedas);

    notas_100 = notas / 100;
    notas %= 100;
    notas_50 = notas / 50;
    notas %= 50;
    notas_20 = notas / 20;
    notas %= 20;
    notas_10 = notas / 10;
    notas %= 10;
    notas_5 = notas / 5;
    notas %= 5;
    notas_2 = notas / 2;
    notas %= 2;
    
    moedas_1 = notas;
    moedas_050 = moedas / 50;
    moedas %= 50;
    moedas_025 = moedas / 25;
    moedas %= 25;
    moedas_010 = moedas / 10;
    moedas %= 10;
    moedas_005 = moedas / 5;
    moedas %= 5;
    moedas_001 = moedas / 1;
       
    printf("NOTAS:\n");
    printf("%i notas(s) de R$ 100.00\n", notas_100);
    printf("%d notas(s) de R$ 50.00\n", notas_50);
    printf("%d notas(s) de R$ 20.00\n", notas_20);
    printf("%d notas(s) de R$ 10.00\n", notas_10);
    printf("%d notas(s) de R$ 5.00\n", notas_5);
    printf("%d notas(s) de R$ 2.00\n", notas_2);

    printf("MOEDAS:\n");
    printf("%d moedas(s) de R$ 1.00\n", moedas_1);
    printf("%d moedas(s) de R$ 0.50\n", moedas_050);
    printf("%d moedas(s) de R$ 0.25\n", moedas_025);
    printf("%d moedas(s) de R$ 0.10\n", moedas_010);
    printf("%d moedas(s) de R$ 0.05\n", moedas_005);
    printf("%d moedas(s) de R$ 0.01\n", moedas_001);

    return 0;
 }