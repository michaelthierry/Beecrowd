/**
 * @file 1061.c
 * @author michaeltheirry86@gmail.com
 * @brief Tempo de um evento: Esse programa pega do usuario o dia do mes que o evento se iniciará
 * em seguinda a hora inicial no formato HH:MM:SS:, a seguir é pego o dia do fim do evento no memso formato.
 * No fim o programa calcula quanto tempo durou o evento.  
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo bibliotecas*/
#include <stdio.h>
 /*Função principal*/
int main() {
    //Declarando variaveis
    int dia_inicial, hora_inicial, minuto_inicial, segundo_inicial;
    int dia_final, hora_final, minuto_final, segundo_final;
    int tempo_inicial_total, tempo_final_total, tempo_evento;
    int dias, horas, minutos, segundos;
    //Lendo do usuario
    scanf("%*s %d ", &dia_inicial);
    scanf("%d %*s %d %*s %d", &hora_inicial, &minuto_inicial, &segundo_inicial);
    scanf("%*s %d ", &dia_final);
    scanf("%d %*s %d %*s %d", &hora_final, &minuto_final, &segundo_final);
    //Calculando o tempo total em segundos
    tempo_inicial_total = segundo_inicial + (minuto_inicial * 60) + (hora_inicial * (60 * 60)) + (dia_inicial * (24 * 60 * 60));
    tempo_final_total = segundo_final + (minuto_final * 60) + (hora_final * (60 * 60)) + (dia_final *(24 * 60 * 60));
    //Subtraindo um tempo pelo outro para ter o tempo total do evento
    tempo_evento = tempo_final_total - tempo_inicial_total;
    //Convertendo 
    dias = tempo_evento/ 86400;
    tempo_evento = tempo_evento % 86400;
    horas = tempo_evento / 3600;
    tempo_evento = tempo_evento % 3600;
    minutos = tempo_evento / 60;
    segundos = tempo_evento % 60;
    //Mostrando o resultado 
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    //Fim do programa
    return 0;
}