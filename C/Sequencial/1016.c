/**
 * @file 1016.c
 * @author michaelthierry86@gmail.com
 * @brief Distancia: Esse programa le a distancia em km do usuario 
 * e calcula em quanto tempo um automovel se distancia de outro sendo
 * que este é duas vezes mais rápido. Ele mostra o tempo em minutos na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int distancia, minutos;
    //Lendo do usuario
    scanf("%i", &distancia);
    //Calculando o tempo
    minutos = distancia * 2;
    //Mostrando o resultado
    printf("%i minutos\n", minutos);

    return 0;
}