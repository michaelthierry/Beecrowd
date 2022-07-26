/**
 * @file 1060.c
 * @author michaelthierry86@gmail.com
 * @brief Numeros Positivos: Esse programa lê seis valores do usuario que podem ser possitvos ou negativos
 * A seguir ele mostra quantos dos valores foram positivos
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
    //Declarando variaveis
    int valor, iterador, conta_positivo = 0;
    //De 1 até 6 faca
    for(iterador = 0; iterador < 6; iterador++){
        //Lendo do usuario
        scanf("%i", &valor);
        //Conta se for positivo
        if(valor > 0){
            conta_positivo++;
        }
    }
    //Mostra o resultado 
    printf("%i valores positivos\n", conta_positivo);
    //Fim do programa
    return 0;
}