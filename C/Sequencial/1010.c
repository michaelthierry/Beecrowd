//1010 - Calculo Simples
#include <stdio.h>

int main(){

    int codigo_peca_1, numero_peca_1;
    int codigo_peca_2, numero_peca_2;
    double valor_peca_1, valor_peca_2, valor_total;

    scanf("%i %i %lf", &codigo_peca_1, &numero_peca_1, &valor_peca_1);
    scanf("%i %i %lf", &codigo_peca_2, &numero_peca_2, &valor_peca_2);

    valor_total = (numero_peca_1 * valor_peca_1) + (numero_peca_2 * valor_peca_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);

    return 0;
}