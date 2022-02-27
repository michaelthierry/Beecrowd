/**
 * @file 1015.c
 * @author your name (you@domain.com)
 * @brief Distancia Entre Dois Pontos.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

int main(){

    double x1 ,y1, x2, y2, ponto_A, ponto_B, distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    ponto_A = (x2 - x1);
    ponto_B = (y2 - y1);

    distancia = sqrt((ponto_A * ponto_A) + (ponto_B * ponto_B));

    printf("%.4lf\n", distancia);

    return 0;
}