/**
 * @file 1043.c
 * @author michaelthierry86@gmail.com
 * @brief Triangulo: Esse programa lê três valores do usuario, se esses valores formarem um triangulo
 * calcula se o perimetro desse triangulo se nao calcula a area de um trapézio. 
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    float valor_A, valor_B, valor_C;
    //Lendo do usuario
    scanf("%f %f %f", &valor_A, &valor_B, &valor_C);
    //Avaliando se o caso froma um triangulo
    if (((valor_B - valor_C) < valor_A) && (valor_A < (valor_B + valor_C))){//se(b-c) < a e a < (b+c)

        if(((valor_A - valor_C) < valor_B) && (valor_B < (valor_A + valor_C))){//se(a-c) < b e b < (a+c)

            if(((valor_A - valor_B) < valor_C) && (valor_C < (valor_A + valor_B))){//se(a-b) < c e c <(a+b)
                //Calcula o perimetro e mostra o resultado
                printf("Perimetro = %.1f\n", valor_A + valor_B + valor_C);
            }
        }
    }else{//caso nao
        //Calcula a are de um trapezio
        printf("Area = %.1f\n",((valor_A + valor_B) / 2) * valor_C);
    }
    //Fim do programa
    return 0;
}