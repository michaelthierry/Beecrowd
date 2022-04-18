/**
 * @file 1036.c
 * @author your name (you@domain.com)
 * @brief Formula de Bhaskara
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <stdio.h>
 #include <math.h>

 int main(){
    double valor_A, valor_B, valor_C;
    double x1, x2, delta, raiz;

    scanf("%lf %lf %lf",&valor_A, &valor_B, &valor_C);

    delta = (valor_B * valor_B) - 4 * valor_A * valor_C;
    raiz = sqrt(delta);

    if(delta < 0 || valor_A == 0){
        printf("Impossivel calcular\n");

    }else{
        x1 = (-valor_B + raiz) / (2 * valor_A);
        x2 = (-valor_B - raiz) / (2 * valor_A);
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }
    return 0;
 }