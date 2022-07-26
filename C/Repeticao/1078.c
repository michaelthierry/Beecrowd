/**
 * @file 1078.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tabuada: Esse programa lê um valor do usuario e mostra a tabuada dele até o numero 10.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarano variaveis
    int iterador, valor, produto;
    //Lendo do usuario
    scanf("%i", &valor);
    //de 1 até 10 faça
    for(iterador = 1; iterador <= 10; iterador++){
        //multiplicando 
        produto = iterador * valor;
        //mostrando o resultado
        printf("%i x %i = %i\n", iterador, valor, produto);
    }
    //fim do programa
    return 0;
}