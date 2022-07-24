/**
 * @file 1046.c
 * @author michaelthierry86@gmail.com
 * @brief Tempo de Jogo: Esse programa lê do usuario a hora inicial e hora final da duração
 * de um jogo. Em seguida ele mostra o tempo de duração do jogo. 
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int hora_inicial, hora_final, horas_totais = 0;
    //lendo do usuario
    scanf("%i %i", &hora_inicial, &hora_final);
    //Avaliando a sitação
    if(hora_inicial == hora_final){//Se as horas forem iguais
        horas_totais = 24;
        printf("O JOGO DUROU %d HORA(S)\n", horas_totais);

    }else if(hora_inicial < hora_final){//Se a hora inicial for menor que a final
        horas_totais = hora_final - hora_inicial;
        printf("O JOGO DUROU %d HORA(S)\n",horas_totais);

    }else{//Caso contrario as hora finais são maior que as iniciais
        horas_totais = 24 - hora_inicial + hora_final;
        printf("O JOGO DUROU %d HORA(S)\n", horas_totais);
    }
    //fim do programa
    return 0;
}