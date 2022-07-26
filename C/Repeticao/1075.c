/**
 * @file 1075.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Resto 2: Esse program recebe um valor (n) do usuario e mostra todos os numero do intervalo
 * 1 e 10000 onde quando divididos por (n) o resto é dois.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo a biliblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarand variaveis
    int iterador, valor;
    //Lendo do usuario
    scanf("%i", &valor);
    //de 1 até 10000 faça
    for(iterador = 1; iterador <= 10000; iterador++){
        //Se o dividir por valor e resto for 2
        if((iterador % valor) == 2){
            //Mostra a mensagem
            printf("%i\n", iterador);
        }
    }
    //Fim do programa
    return 0;
}
