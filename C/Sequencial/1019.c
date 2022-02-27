/**
 * @file 1019.c
 * @author your name (you@domain.com)
 * @brief Conversão de Tempo.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){

    int segundos_totais, horas, minutos, segundos;

    scanf("%i", &segundos_totais);

    horas = segundos_totais / 3600;
    minutos = (segundos_totais - (3600 * horas)) / 60;
    segundos = (segundos_totais - (3600 * horas) - (minutos * 60));

    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}