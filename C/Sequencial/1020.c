/**
 * @file 1020.c
 * @author michaelthierry86@gmail.com
 * @brief Idade em Dias: Esse programa lê do usuario um valor inteiro que 
 * corresponde ao total de dias. Em seguida ele converte o valor para o formato
 * Ano: Dia: Mes e mostra na tela.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    int dias_totais, anos, meses, dias;
    //Lendo do usuario
    scanf("%i", &dias_totais);
    //Calculando para formato Ano:Mes:Dia
    anos = dias_totais / 365;
    meses = (dias_totais - (365 * anos)) / 30;
    dias = (dias_totais - (365 * anos) - (meses * 30));
    //Mostrando o resultado
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}