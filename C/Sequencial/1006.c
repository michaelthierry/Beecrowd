/**
 * @file 1006.c
 * @author michaelthierry86@gmail.com
 * @brief Média 2: Esse programa calcula a media de tres notas de um aluno.
 * Ele le tres valores reais do usuario e calcula a media, sendo os pesos
 * 2, 3 e 5 para as notas.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo a bibioteca E/S*/
#include <stdio.h>
/*Função principal*/
int main (){
    //Variveis declaradas
    double primeira_nota, segunda_nota, terceira_nota, media;
    //Lendo do usuario
    scanf("%lf", &primeira_nota);
    scanf("%lf", &segunda_nota);
    scanf("%lf", &terceira_nota);
    //Calculando a media
    media = (primeira_nota * 2) + (segunda_nota * 3) + (terceira_nota * 5);
    media = media / 10.0;
    //Mostrando o resultado na tela
    printf("MEDIA = %.1lf\n", media);

    return 0;
}