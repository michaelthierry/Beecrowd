/**
 * @file 1017.c
 * @author michaelthierry86@gmail.com
 * @brief Gasto De Combustivel: Esse programa le o tempo e a velocidade media passados pelo
 * usuario e calcula a quantidade de combustivel gasto sabendo que o veiculo do mesmo faz 12 km/l
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando varaiveis
    int tempo,velocidade;
    double litros;
    //Lendo do usuario
    scanf("%i", &tempo);
    scanf("%i", &velocidade);
    //Calculando a quantidade de combustivel
    litros = ((velocidade * tempo) / 12);
    //Mostrando o resultado
    printf("%.3f\n", litros);
    
    return 0;
}