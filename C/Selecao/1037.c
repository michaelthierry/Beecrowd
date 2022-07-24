/**
 * @file 1037.c
 * @author michaelthierry86@gmail.com
 * @brief Intervalo: Esse programa le um valor real do usuario e mostra
 * a que intervalo numerico ele se encontra.
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variavel
    float valor;
    //Lendo do usuario
    scanf("%f", &valor);
    //Encontra o intervalo
    if (valor >= 0 && valor <= 25){//se de (0 até 25)
        //mostra o intervalo
        printf("Intervalo [0,25]\n");

    }else if(valor > 25 && valor <= 50){//se de (25 até 50)
        //mostra o intervalo
        printf("Intervalo (25,50]\n");

    }else if(valor > 50 && valor <= 75){//se de (50 até 75)
        //mostra o intervalo
        printf("Intervalo (50,75]\n");

    }else if(valor > 75 && valor <= 100){//se de (75 até 100)
        //mostra o intervalo
        printf("Intervalo (75,100]\n");

    }else{//se não atende
        //Mostra a mensagem
        printf("Fora de intervalo\n");
    }
    //fim do programa
    return 0;
}