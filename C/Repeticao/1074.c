/**
 * @file 1074.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Par ou Impar: Esse programa recebe um valor do usuario que diz quantos numeros ele digitará em 
 * seguida. Para cada numero que o usuario digitar o programa dirá se é par(positivo ou negativo) ou se é
 * impar(positivo ou negativo). Se caso o valor for zero deve mostrar que é nulo.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int iterador, valor, quantidade;
    //Inicializando varivel
    iterador = 0;
    //lendo do usuario
    scanf("%i", &quantidade);
    //de iterador ate quantidade
    while(iterador < quantidade){
        //Lendo o valor do usuario
        scanf("%i", &valor);
        //Avaliando os casos
        if(valor == 0){
            printf("NULL\n");
        }else if((valor % 2) == 0){
            //Avaliando sinal
            if(valor > 0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("EVEN NEGATIVE\n");
            }
        }else{
            //Avaliando sinal
            if(valor > 0){
                printf("ODD POSITIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
        //incrementa iterador
        iterador++;
    }
    //Fim do programa
    return 0;
}