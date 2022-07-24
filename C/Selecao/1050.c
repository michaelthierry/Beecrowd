/**
 * @file 1050.c
 * @author michaelthierry86@gmail.com
 * @brief DDD : Esse programa lê um valor do usuario que corresponde a um DDD
 * Se o DDD estiver cadastrado ele mostra na tela de onde é.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variavel
    int DDD;
    //Lendo do usuario
    scanf("%d", &DDD);
    //Avaliando os casos:
    switch(DDD){
        case 61:
            printf("Brasilia\n");
            break;
        case 71:
            printf("Salvador\n");
            break;
        case 11:
            printf("Sao Paulo\n");
            break;
        case 21:
            printf("Rio de Janeiro\n");
            break;
        case 32:
            printf("Juiz de Fora\n");
            break;
        case 19:
            printf("Campinas\n");
            break;
        case 27:
            printf("Vitoria\n");
            break;
        case 31:
            printf("Belo Horizonte\n");
            break;
        default:
            printf("DDD nao cadastrado\n");
            break;
    }
    //Fim do programa
    return 0;
}