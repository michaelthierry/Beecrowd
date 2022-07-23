/**
 * @file 1021.c
 * @author michaelthierry86@gmail.com
 * @brief Notas e moedas: Esse programa lê do usuario um valor real que 
 * corresponde ao saldo de sua conta. Em seguida ele calcula quais e quantas
 * notas e moedas ele deve fornecer ao usuario e mostra na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo a Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declaração de variaveis
    double saldo;
    int notas, notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
    int moedas, moedas_1, moedas_050, moedas_025, moedas_010, moedas_005, moedas_001;
    //Lendo do usuario
    scanf("%lf", &saldo);
    //Calculando valor em notas e moedas
    notas = saldo;
    moedas = (saldo - notas) * 100;
    //Calculando as notas
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
    //Calculando as moedas
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
    //Mostrando as notas 
    printf("NOTAS:\n");
    printf("%i notas(s) de R$ 100.00\n", notas_100);
    printf("%d notas(s) de R$ 50.00\n", notas_50);
    printf("%d notas(s) de R$ 20.00\n", notas_20);
    printf("%d notas(s) de R$ 10.00\n", notas_10);
    printf("%d notas(s) de R$ 5.00\n", notas_5);
    printf("%d notas(s) de R$ 2.00\n", notas_2);
    //Mostrando as moedas
    printf("MOEDAS:\n");
    printf("%d moedas(s) de R$ 1.00\n", moedas_1);
    printf("%d moedas(s) de R$ 0.50\n", moedas_050);
    printf("%d moedas(s) de R$ 0.25\n", moedas_025);
    printf("%d moedas(s) de R$ 0.10\n", moedas_010);
    printf("%d moedas(s) de R$ 0.05\n", moedas_005);
    printf("%d moedas(s) de R$ 0.01\n", moedas_001);

    return 0;
 }