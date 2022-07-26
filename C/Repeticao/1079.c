/**
 * @file 1079.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Media Ponderadas: Esse programa recebe um valor do usuario que sera o numero de caso que ele ira
 * tratar, em cada caso o usuario irá digitar tres valores de reais. O programa faz a media ponderada
 * considerando os pesos 2, 3 e 5 para os valores respectivamente. Cada media é calculada em cada caso.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*funcão principal*/
int main(){
    //Declarando variaveis
    int numero_casos, iterador;
    double valor_1, valor_2, valor_3, media_ponderada;
    //Inciando iterador
    iterador = 0;
    //Lendo do usuario
    scanf("%i", &numero_casos);
    //de iterador até numero de casos
    while(iterador < numero_casos){
        //lendo os valores do usuario
        scanf("%i %i %i", &valor_1, &valor_2, &valor_3);
        //calculando a media
        media_ponderada = (valor_1 * 2.0) + (valor_2 * 3.0) + (valor_3 * 5.0) / (2.0 + 3.0 + 5.0);
        //Mostrando o resultado
        printf("%.1lf\n", media_ponderada);
        //Incrementa o iterador
        iterador++;
    }
    //fim do programa
    return 0;
}