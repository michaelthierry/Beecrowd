//1019 - Conversão de Tempo.
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