/**
 * @file 1047.c
 * @author michaelthierry86@gmail.com
 * @brief Tempo de Jogo com Minutos: Esse programa le do usuario as hora e minuto de inicio do jogo 
 * e as horas e minuto finais do jogo. Em seguida calcula as horas a minutos de duração do jogo e mostra 
 * na tela.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Bibliotecas*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //declarando variaveis
    int hora_inicial, minuto_inicial, hora_final, minuto_final, horas_finais, minutos_finais;
    //Lendo do usuario
    scanf("%i %i %i %i", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    //Avalinado os casos
    if(hora_inicial == hora_final){//se as horas forem iguais

        if((minuto_inicial == hora_final) && (minuto_final == hora_final)){//se minutos são iguais a hora final
            //Calcula as horas e minutos
            horas_finais = 24 + minuto_inicial - minuto_final;
            minutos_finais = minuto_inicial - minuto_final;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }else if(minuto_inicial > minuto_final){//se o minuto final < que o inicial
            //Calcula as horas e minutos
            horas_finais = 24 - hora_inicial + hora_final - 1;
            minutos_finais = 60 - minuto_inicial + minuto_final;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }else if(minuto_inicial < minuto_final){
            //Calculando as horas e minutos
            horas_finais = hora_inicial - hora_final;
            minutos_finais = minuto_final - minuto_inicial;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }
    }else if(hora_inicial > hora_final){//Se hora incial > que hora final

        if(minuto_inicial == minuto_final){//Se minuto inicial = ao inicial
            //Calcula horas e minutos
            horas_finais = 24 - hora_inicial + hora_final;
            minutos_finais = 0;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }else if(minuto_inicial > minuto_final){//se minuto inicial > minuto final
            //Calcula horas e minutos
            horas_finais = 24 - hora_inicial - 1 + hora_final;
            minutos_finais = 60 + minuto_final - minuto_inicial;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);
        }else {//caso contrario
            //Calcula horas e minutos
            horas_finais = 24 - hora_inicial - 1 + hora_final;
            minutos_finais = minuto_final - minuto_inicial;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);
        }

    }else{// Caso contrario
        if(minuto_inicial == minuto_final){//Se minutos iguais
            //calcula as hora e minutos
            horas_finais = hora_final - hora_inicial;
            minutos_finais = 0;
            //mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }else if(minuto_inicial > minuto_final){//se o minuto inicial > que final
            //Calcula as horas e minutos
            horas_finais = hora_final - hora_inicial - 1;
            minutos_finais = 60 - minuto_inicial + minuto_final;
            //Mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);

        }else{//caso contrario
            //Calcula as hora e minutos
            horas_finais = hora_final - hora_inicial;
            minutos_finais = minuto_final - minuto_inicial;
            //mostra o resultado
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas_finais, minutos_finais);
        }
     }
     return 0;
}