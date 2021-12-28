//1020 - Idade em Dias.
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