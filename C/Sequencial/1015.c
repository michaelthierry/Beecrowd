/**
 * @file 1015.c
 * @author michaelthierry86@gmail.com
 * @brief Distancia Entre Dois Pontos: Esse Programa lê as coordenadas de dois pontos
 * passado pelo usuario, em seguida ele calcula a distancia entre os ponto e mostra
 * na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
#include <math.h>
/*Função Principal*/
int main(){
    //Declarando varaiveis
    double x1 ,y1, x2, y2, ponto_A, ponto_B, distancia;
    //Lendo do usuario
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    //Caculando o deltaX e deltaY
    ponto_A = (x2 - x1);
    ponto_B = (y2 - y1);
    //Calculando a ditancia
    distancia = sqrt((ponto_A * ponto_A) + (ponto_B * ponto_B));
    //Mostrando o resultado
    printf("%.4lf\n", distancia);

    return 0;
}