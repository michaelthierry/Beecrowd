//1002 - Area do Circulo.
#include <stdio.h>

#define PI 3.14159

int main(){

    double area_do_circulo ;

    scanf("%lf", &area_do_circulo);

    area_do_circulo = PI * (area_do_circulo * area_do_circulo);

    printf("A=%.4f\n", area_do_circulo);

    return 0;
}
