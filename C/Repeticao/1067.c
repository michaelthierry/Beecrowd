/**
 * @file 1067.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Numeros Impares: Esse programa recebe um valor do usuario entre 1 e 1000, a seguir ele mostra
 * todos os valores que impares que existem entre 1 e o numero que o usuario digitou.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Bibliotecas*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int iterador, valor;
    //Inicilaizando iterador
    iterador = 1;
    //lendo do usuario
    scanf("%i", &valor);
    //De 1 até valor
    while(iterador <= valor){
        //Se for impar
        if((iterador % 2) != 0){
            printf("%i\n", iterador);
        }
        //incremeta o iterador
        iterador++;
    }
    //Fim do programa
    return 0;
}