/**
 * @file 1009.c
 * @author michaelthierry86@gmail.com
 * @brief Salario com bonus: Esse programa le o nome de um vendedor, o salario e 
 * o valor das vendas que ele fez. Em seguida bonifica o salario com 15% das vendas
 * e mostra o novo salario.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando Variaveis
    char *nome;
    double salario, vendas;
    //Lendo do usuario
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    //Calculando o novo salario
    salario += (vendas / 100.0) * 15.0;
    //Mostrando o resultado
    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}