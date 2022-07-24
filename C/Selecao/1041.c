/**
 * @file 1041.c
 * @author michaelthierry86@gmail.com
 * @brief Coordenadas de um ponto: Esse programa lê dois valores que representam
 * as coordenadas de um ponto. Em seguida informa a qual quadrante, eixo ou se o 
 * ponto esta na origem.
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    float x, y;
    //Lendo do usuario
    scanf("%f %f", &x, &y);
    //Avaliando a situação
    if(x > 0 && y > 0){
        printf("Q1\n");

    }else if(x > 0 && y < 0){
        printf("Q4\n");

    }else if(x < 0 && y > 0){
        printf("Q2\n");

    }else if(x < 0 && y < 0){
        printf("Q3\n");

    }else if((x == 0) && (y > 0 || y < 0)){
        printf("Eixo Y\n");

    }else if((y == 0) && (x > 0 || x < 0)){
        printf("Eixo X\n");

    }else if((y == 0) && (x == 0)){
        printf("Origem\n");

    }
    return 0;
}