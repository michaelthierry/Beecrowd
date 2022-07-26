/**
 * @file 1059.c
 * @author michaelthierry86@gmail.com
 * @brief Numeros Pares: Esse programa mostra todos os numeros pares entre 0 e 100
 * @version 0.1
 * @date 2022-07-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variavel
    int par;
    //De 2 até 100 faça
    for(par = 2; par <= 100; par += 2){
        //Mostra o numero na tela
        printf("%i\n", par);
    }
    //Fim do programa
    return 0;
}