/**
 * @file 1005.c
 * @author michaelthierry86@gmail.com
 * @brief Média 1: Esse programa calcula a media entre duas notas de um aluno
 * e mostra o resultado na tela.Ele recebe dois valores reais do usuario corespondendo
 * a primeira e segunda nota. A seguir ele calcula a media sendo os pesos 3.5 e 7.5 respectivamente
 * em seguinda mostra o valor.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    double primeira_nota, segunda_nota, media;
    //Lendo do usuario
    scanf("%lf", &primeira_nota);
    scanf("%lf", &segunda_nota);
    //Calculando a media
    media = (primeira_nota * 3.5) + (segunda_nota * 7.5);
    media = media / 11;
    //Mostrando o resultado
    printf("MEDIA = %.5lf\n", media);

    return 0;
}