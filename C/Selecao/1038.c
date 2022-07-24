/**
 * @file 1038.c
 * @author michaelthierry86@gmail.com
 * @brief Lanche: Esse programa lê o codigo do lanche e a quantidade passado
 * pelo usuario. Em seguida ele calcula o valor total 
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int codigo, quantidade;
    float total;
    //Lendo do usuario
    scanf("%i %i", &codigo, &quantidade);
    //Tratando de acordo com o caso
    switch (codigo){
        case  1:
            total = quantidade * 4.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 2:
            total = quantidade * 4.50;
            printf("Total: R$ %.2f\n", total);
            break;
        case 3:
            total = quantidade * 5.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 4:
            total = quantidade * 2.00;
            printf("Total: R$ %.2f\n", total);
            break;
        case 5:
            total = quantidade * 1.50;
            printf("Total: R$ %.2f\n", total);
            break;
        default:
            break;
    }
    //Fim do programa
    return 0;
}