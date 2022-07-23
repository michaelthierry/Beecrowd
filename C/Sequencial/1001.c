/**
 * @file 1001.c
 * @author michaelthierry86@gmail.com
 * @brief Extremamente Basico: Esse programa lê dois valores inteiros do usuario
 * e mostra na tela o resultado da soma entre eles
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Importando biblioteca de E/S*/ 
#include <stdio.h>
/*Função principal*/
int main(){
    //Declanado as variáveis
    int primeiro_valor, segundo_valor, valor_x;
    //Lendo do usuario
    scanf("%i", &primeiro_valor);
    scanf("%i", &segundo_valor);
    //somado os valores
    valor_x = primeiro_valor + segundo_valor;
    //mostra o resultado na tela
    printf("X = %i\n", valor_x);

    return 0;
}