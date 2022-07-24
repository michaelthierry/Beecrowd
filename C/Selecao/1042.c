/**
 * @file 1042.c
 * @author michaelthierry86@gmail.com
 * @brief Sort simples: Esse programa lê tres valores inteiro do usuario e os mostra em 
 * ordem crescente.
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
    //Declarando variaveis
    int valor_A, valor_B, valor_C;
    //Lendo do usuario
    scanf("%i %i %i", &valor_A, &valor_B, &valor_C);
    //Avaliando o caso
    if(((valor_A > valor_B) && valor_C) && (valor_B > valor_C)){//C é o maior e A é o menor
        printf("%i\n", valor_C);
        printf("%i\n", valor_B);
        printf("%i\n", valor_A);

    }else if(((valor_A > valor_B) && (valor_A > valor_C)) && (valor_B < valor_C)){//B é o maior e A o menor
        printf("%i\n", valor_B);
        printf("%i\n", valor_C);
        printf("%i\n", valor_A);

    }else if((valor_B > valor_A) && (valor_A > valor_C)){//C é o maior e B o menor
        printf("%i\n", valor_C);
        printf("%i\n", valor_A);
        printf("%i\n", valor_B);

    }else if(((valor_B > valor_C) && (valor_B > valor_A)) && (valor_A < valor_C)){//A é o maior e B  menor
        printf("%i\n", valor_A);
        printf("%i\n", valor_C);
        printf("%i\n", valor_B);

    }else if((valor_C > valor_A) && (valor_A > valor_B)){//B é o maior e C o menor
        printf("%i\n", valor_B);
        printf("%i\n", valor_A);
        printf("%i\n", valor_C);

    }else if((valor_C > valor_A) && (valor_C > valor_B) && (valor_A < valor_B)){//A é o maior e C é o menor
        printf("%i\n", valor_A);
        printf("%i\n", valor_B);
        printf("%i\n", valor_C);

    }
    //Salta linha e mostra como estava antes de "ordenar"
    printf("\n");
    printf("%i\n", valor_A);
    printf("%i\n", valor_B);
    printf("%i\n", valor_C);
    //Fim do programa
    return 0;
}
