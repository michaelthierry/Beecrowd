/**
 * @file 1002.c
 * @author michaelthierry86@gmail.com
 * @brief Area do Circulo: Esse programa calcula a area de um circulo
 * de raio R. Ele recebe um valor real do usuario e que corresponde ao
 * raio da circunferencia, em seguida ele calcula a area e mostra o 
 * resultado na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo biblioteca E/S*/
#include <stdio.h>
/*Definindo a constante PI*/
#define PI 3.14159
/*Função principal*/
int main(){
    //Declarando as variaveis
    double area_do_circulo ;
    //Lendo do usuario
    scanf("%lf", &area_do_circulo);
    //Calculando a area do circulo
    area_do_circulo = PI * (area_do_circulo * area_do_circulo);
    //Mostrando o resultado
    printf("A=%.4f\n", area_do_circulo);

    return 0;
}
