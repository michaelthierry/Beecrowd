/**
 * @file 1036.c
 * @author michaelthierry86@gmail.com
 * @brief Formula de Bhaskara: Esse programa lê três valores reais do usuario
 * sendo os valores do termo de uma função quadratica ax²+ bx +c.
 * A seguir ele calcula as raizes se possivel
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo as bibliotecas*/
#include <stdio.h>
#include <math.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    double valor_A, valor_B, valor_C;
    double x1, x2, delta, raiz;
    //Lendo o valor do usuario
    scanf("%lf %lf %lf",&valor_A, &valor_B, &valor_C);
    //Calculando o delta 
    delta = (valor_B * valor_B) - 4 * valor_A * valor_C;
    //Se o delta for negativo ou (a) for zero
    if(delta < 0 || valor_A == 0){
        //Mostra a mensagem
        printf("Impossivel calcular\n");

    }else{//caso não
        //Calcula as raizes
        raiz = sqrt(delta);
        x1 = (-valor_B + raiz) / (2 * valor_A);
        x2 = (-valor_B - raiz) / (2 * valor_A);
        //Mostra o resultado
        printf("R1 = %.5f\n", x1);
        printf("R2 = %.5f\n", x2);
    }
    //fim do programa
    return 0;
}