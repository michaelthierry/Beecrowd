//1017 - Gasto De Combustivel
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