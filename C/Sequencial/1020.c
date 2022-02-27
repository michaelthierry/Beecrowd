/**
 * @file 1020.c
 * @author your name (you@domain.com)
 * @brief Idade em Dias.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int dias_totais, anos, meses, dias;

    scanf("%i", &dias_totais);

    anos = dias_totais / 365;
    meses = (dias_totais - (365 * anos)) / 30;
    dias = (dias_totais - (365 * anos) - (meses * 30));

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}