/**
 * @file 1045.c
 * @author your name (you@domain.com)
 * @brief Tipos de Triangulo
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 //CODE 1045//TIPO DE TRIANGULOS
#include <stdio.h>
int main(){
    float valor_A, valor_B, valor_C, valor_D;
    scanf("%f %f %f", &valor_A, &valor_B, &valor_C);

    if (0 < valor_A && 0 < valor_B && 0 < valor_C){
        if(valor_A > valor_B && valor_A > valor_C){
           if(valor_B < valor_C){
                valor_D = valor_B;
                valor_B = valor_C;
                valor_C = valor_D;

           }
        }else if(valor_B > valor_A && valor_B > valor_C){
           if(valor_A > valor_C){
                valor_D = valor_A;
                valor_A = valor_B;
                valor_B = valor_D;

           }else{
                valor_D = valor_A;
                valor_A = valor_B;
                valor_B = valor_C;
                valor_C = valor_D;

           }
        }else if(valor_C > valor_A && valor_C > valor_B){
           if(valor_A > valor_B){
                valor_D = valor_A;
                valor_A = valor_C;
                valor_C = valor_B;
                valor_B = valor_D;
           }else{
                valor_D = valor_A;
                valor_A = valor_C;
                valor_C = valor_D;
           }
        }
    }

    if(valor_A >= valor_B + valor_C){
        printf("NAO FORMA TRIANGULO\n");

    }else{
        if((valor_A * valor_A) == ((valor_B * valor_B) + (valor_C * valor_C))){
            printf("TRIANGULO RETANGULO\n");

        }
        if((valor_A * valor_A) > ((valor_B * valor_B) + (valor_C * valor_C))){
            printf("TRIANGULO OBTUSANGULO\n");

        }
        if((valor_A * valor_A) < ((valor_B * valor_B) + (valor_C * valor_C))){
            printf("TRIANGULO ACUTANGULO\n");

        }
        if((valor_A == valor_B) && (valor_A == valor_C)){
            printf("TRIANGULO EQUILATERO\n");

        }
        if((valor_A == valor_B) && (valor_A != valor_C) || (valor_A == valor_C) && (valor_A != valor_B) || (valor_B == valor_C) && (valor_B != valor_A)){
            printf("TRIANGULO ISOSCELES\n");

        }
     }

    return 0;
}
