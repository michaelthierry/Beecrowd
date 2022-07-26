/**
 * @file 1070.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Seis numeros impares: Esse programa recebe um valor inteiro do usuario, em seguida, mostra
 * os seis numeros impares consecutivos.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*função principal*/
int main(){
    //Declarando variaveis;
    int iterador, valor;
    //Incializado iterador
    iterador = 0;
    //Lendo do usuario
    scanf("%i", &valor);
    //de 0 até 5
    while(iterador <= 5){
        //Se for par
        if((valor % 2) == 0){
            valor++;
            printf("%i", valor);
            iterador++;
        }else{
            printf("%i", valor);
            valor += 2;
            iterador++;
        }
    }
    //Fim do programa
    return 0;
}