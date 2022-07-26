/**
 * @file 1064.c
 * @author michaelthierry86@gmail.com
 * @brief Positivos e media: Esse program lê 6 valores interios do usuário
 * em seguida ele conta quandos foram inteiros e faz a media dos mesmos e mostra na tela.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*funcção Principal*/
int main(){
    //Declarando variaveis
    int iterador, conta_positivo;
    double media, valor, soma;
    //Inicializando variaveis
    conta_positivo = 0;
    soma = 0;
    //de 0 até 6 faça
    for(iterador = 0; iterador < 6; iterador++){
        //lê do usuario
        scanf("%lf", &valor);
        //Se for maior do que zero
        if(valor > 0){
            conta_positivo++;
            soma += valor;
        }
    }
    //calculando a media
    media = soma / conta_positivo;
    //Mostrando o resultado
    printf("%i valores positivos\n", conta_positivo);
    printf("%.1lf\n", media);
    //fim do programa
    return 0;
}