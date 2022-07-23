/**
 * @file 1010.c
 * @author michaelthierry86@gmail.com
 * @brief Calculo Simples: Esse programa Le o codigo de duas peças, quantidade e o preço de
 * cada uma. Em seguida o valor total é calculado e mostrado na tela
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
    /*Declarando varaiveis*/
    int codigo_peca_1, numero_peca_1;
    int codigo_peca_2, numero_peca_2;
    double valor_peca_1, valor_peca_2, valor_total;
    //Lendo do usuario
    scanf("%i %i %lf", &codigo_peca_1, &numero_peca_1, &valor_peca_1);
    scanf("%i %i %lf", &codigo_peca_2, &numero_peca_2, &valor_peca_2);
    //Calculando o valor total das peças
    valor_total = (numero_peca_1 * valor_peca_1) + (numero_peca_2 * valor_peca_2);
    //Mostrando o resultado
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);

    return 0;
}