/**
 * @file 1052.c
 * @author michaelthierry86@gmail.com
 * @brief Mes: Esse programa lê um valor do usuario e mostra a qual mês corresponde em ingles
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo bibliotecas*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variavel
    int mes;
    //lendo do usuario
    scanf("%i", &mes);
    //Avaliando os casos
    switch(mes){
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            break;
    }
    //Fim do programa
    return 0;
}