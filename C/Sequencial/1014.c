//1014 - Consumo
#include <stdio.h>

int main(){

    int distancia;
    float combustivel, consumo;

    scanf("%i", &distancia);
    scanf("%f", &combustivel);

    consumo = distancia / combustivel;

    printf("%.3f km/l\n", consumo);

    return 0;
}
