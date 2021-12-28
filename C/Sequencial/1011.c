//1011 - Esfera
#include <stdio.h>

#define PI 3.14159

int main(){

    int raio;
    double volume;

    scanf("%i", &raio);

    volume = (4 / 3.0) * PI * (raio * raio * raio);

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
