/**
 * @file 1073.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Quadrado de Pares: Esse programa recebe um valor do usuario, em seguida ele mostra todos os 
 * quadrados pares de 0 até o valor de entrada e incluive o quadrado desse se o mesmo for par.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo bibliotecas*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variavel
    int iterador, valor, quadrado;
    //Incializando o iterador
    iterador = 2;
    quadrado = 0;
    //Lendo do usuario
    scanf("%i", &valor);
    //do iterador até o valor
    while(iterador <= valor){
        //Calcula o quadrado
        quadrado = iterador * iterador;
        //Mostra o resultado
        printf("%i ^ 2 = %i", iterador, quadrado);
        //Incremeta o iterador
        iterador += 2;
    }
    //Fim do programa
    return 0;
}