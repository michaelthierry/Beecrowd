/**
 * @file 1007.c
 * @author michaelthierry86@gmail.com
 * @brief Diferença: Esse programa le quatro valores inteiros do usuario
 * e calcula a diferença do produto dos dois primeiros com o produto
 * dos dois ultimos
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo a Biblioteca E/S*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Variaveis declaradas
    int valor_A, valor_B, valor_C, valor_D, diferenca;
    //Lendo do usuario
    scanf("%i", &valor_A);
    scanf("%i", &valor_B);
    scanf("%i", &valor_C);
    scanf("%i", &valor_D);
    //Calculando a diferença
    diferenca = (valor_A * valor_B) - (valor_C * valor_D);
    //Mostrando o resultado na tela
    printf("DIFERENCA = %i\n", diferenca);

    return 0;
}