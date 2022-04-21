//CODE 1047// TEMPO DE JOGO COM  MINUTOS
#include <stdio.h>
int main()
{
    int a,b,c,d,h,m;
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if(a==c)

    {
       if(b==c&&d==c)
       {
           h=24+b-d;
           m=b-d;
           printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
       }
       else if(b>d)
       {
            h= 24-a+c-1;
            m=60-b+d;
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
       }
       else if(b<d)
       {
            h= a-c;
            m = d-b;
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
       }
    }
    if(a>c)

    {
           if(b==d)
           {
               h= 24-a+c;
               m= 0;
               printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
           }
           else if(b>d)
           {
              h= 24-a-1+c;
              m= 60+d-b;
              printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
           }
           else if(b<d)
           {
              h= 24-a-1+c;
              m= d-b;
              printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
           }

    }
    if(a<c)

    {
        if(b==d)
        {
           h= c-a;
           m=0;
           printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
        }
        else if(b>d)
        {
            h=c-a-1;
            m=60-b+d;
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
        }
        else if(b<d)
        {
            h=c-a;
            m=d-b;
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",h,m);
        }
     }
     return 0;
   }


