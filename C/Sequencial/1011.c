/**
 * @file 1011.c
 * @author michaelthierry86@gmail.com
 * @brief Esfera: Esse Programa le o valor do raio da esfera passado pelo usuario,
 * em seguida calcula o volume da esfera e mostra na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Definindo constante PI*/
#define PI 3.14159
/*Função Principal*/
int main(){
    //Declarando variaveis
    int raio;
    double volume;
    //Lendo do usuario
    scanf("%i", &raio);
    //Calculando o volume
    volume = (4 / 3.0) * PI * (raio * raio * raio);
    //Mostrando o resultado
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
