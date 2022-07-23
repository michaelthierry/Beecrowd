/**
 * @file 1012.c
 * @author michaelthierry86@gmail.com
 * @brief  Área: Esse programa le tres valores do usuario e calcula
 * a area do triangulo, circulo, trapezio, quadrado e retangulo
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluido Biblioteca E/S*/
#include <stdio.h>
/*Defindo a constante PI*/
#define PI 3.14159
/*Função Principal*/
int main(){
    //Variaveis declaradas
    double valor_A, valor_B, valor_C;
    double area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    //Lendo do usuario
    scanf("%lf %lf %lf", &valor_A, &valor_B, &valor_C);
    //Calculando a area do traingulo, circulo, trapezio, quadrado e retangulo
    area_triangulo = (valor_A * valor_C) / 2;
    area_circulo = PI * (valor_C * valor_C);
    area_trapezio = ((valor_A + valor_B) * valor_C) / 2;
    area_quadrado = valor_B * valor_B;
    area_retangulo = valor_A * valor_B;
    //Mostrando os resultados
    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}