/**
 * @file 1009.c
 * @author your name (you@domain.com)
 * @brief Salario com bonus
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    char nome[20];
    double salario, vendas;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    vendas = (vendas / 100) * 15;
    salario = salario + vendas;

    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}