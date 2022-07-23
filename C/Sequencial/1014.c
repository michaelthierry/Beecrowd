/**
 * @file 1014.c
 * @author michaelthierry86@gmail.com
 * @brief Consumo: Esse programa lê a distancia percorrida em Km
 * e a quantidade de combustivel gasta (em l), calcula o consumo
 * e mostra na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluido Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int distancia;
    float combustivel, consumo;
    //Lendo do usuario
    scanf("%i", &distancia);
    scanf("%f", &combustivel);
    //Calculando o consumo
    consumo = distancia / combustivel;
    //Mostrando o resultado
    printf("%.3f km/l\n", consumo);

    return 0;
}
