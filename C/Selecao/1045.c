/**
 * @file 1045.c
 * @author michaelthierry86@gmail.com
 * @brief Tipos de Triangulo: Esse programa lê três valore do usuario
 * ordena os valores de forma decrescente e diz se forma um triangulo ou não 
 * e diz o tipo de triangulos os valores podem formar.
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    float valor_A, valor_B, valor_C;
    //Lendo do usuario
    scanf("%f %f %f", &valor_A, &valor_B, &valor_C);
    //Ordenado valores de forma decrescente
    if ((0 < valor_A) && (0 < valor_B) && (0 < valor_C)){//se todos são > 0
        if((valor_A > valor_B) && (valor_A > valor_C)){//se a for o maior
            if(valor_B < valor_C){//se b < c
                //Declara uma varaiavel auxiliar
                float auxiliar;
                auxiliar = valor_B;
                valor_B = valor_C;
                valor_C = auxiliar;
            }
        }else if(valor_B > valor_A && valor_B > valor_C){//se b for o maior
            float auxiliar;
            if(valor_A > valor_C){//se a > c
                auxiliar = valor_A;
                valor_A = valor_B;
                valor_B = auxiliar;

            }else{//se nao for
                auxiliar = valor_A;
                valor_A = valor_B;
                valor_B = valor_C;
                valor_C = auxiliar;
            }
        }else if(valor_C > valor_A && valor_C > valor_B){//se c é o maior
            float auxiliar;
            if(valor_A > valor_B){//se a > b
                auxiliar = valor_A;
                valor_A = valor_C;
                valor_C = valor_B;
                valor_B = auxiliar;
            }else{//se não
                auxiliar = valor_A;
                valor_A = valor_C;
                valor_C = auxiliar;
            }
        }
    }
    //Se forma ou não um triangulo e que tipo de triangulo é
    if(valor_A >= (valor_B + valor_C)){
        //Não forma um triangulo
        printf("NAO FORMA TRIANGULO\n");
    }else{//se não

        if((valor_A * valor_A) == ((valor_B * valor_B) + (valor_C * valor_C))){//se a² = b² + c²
            printf("TRIANGULO RETANGULO\n");

        }
        if((valor_A * valor_A) > ((valor_B * valor_B) + (valor_C * valor_C))){//se a² > b² + c²
            printf("TRIANGULO OBTUSANGULO\n");

        }
        if((valor_A * valor_A) < ((valor_B * valor_B) + (valor_C * valor_C))){//se a² < b² + c²
            printf("TRIANGULO ACUTANGULO\n");
            
        }
        if((valor_A == valor_B) && (valor_A == valor_C)){//se a = b = c
            printf("TRIANGULO EQUILATERO\n");

        }
        if((valor_A == valor_B) && (valor_A != valor_C) || (valor_A == valor_C) && (valor_A != valor_B) || (valor_B == valor_C) && (valor_B != valor_A)){//se 2 iguais e um diferente
            printf("TRIANGULO ISOSCELES\n");

        }
     }
    //Fim do programa
    return 0;
}
