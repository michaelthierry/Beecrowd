/**
 * @file 1019.c
 * @author michaelthierry86@gmail.com
 * @brief Conversão de Tempo: Esse programa lê do usuario um valor inteiro que
 * corresponde ao total de segundos. Em seguida ele faz a coneversão para
 * horas:minutos:segundos e mostra na tela
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int segundos_totais, horas, minutos, segundos;
    //Lendo do usuário
    scanf("%i", &segundos_totais);
    //Calculando para o formato h:m:s
    horas = segundos_totais / 3600;
    minutos = (segundos_totais - (3600 * horas)) / 60;
    segundos = (segundos_totais - (3600 * horas) - (minutos * 60));
    //Mostrando o resultado
    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}