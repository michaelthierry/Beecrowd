/**
 * @file 1046.c
 * @author your name (you@domain.com)
 * @brief tempo de Jogo
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 //CODE 1046//TEMPO DE JOGO
#include <stdio.h>
int main()
{
    int A,B,C=0;
    scanf("%i %i",&A,&B);
    if (A==B)
    {
       C=24;
       printf("O JOGO DUROU %d HORA(S)\n",C);
    }
    else if(A<B)
    {
      C= B-A;
      printf("O JOGO DUROU %d HORA(S)\n",C);

    }
    else
    {
        C = 24 - A+B;
        printf("O JOGO DUROU %d HORA(S)\n",C);
    }
    return 0;
}