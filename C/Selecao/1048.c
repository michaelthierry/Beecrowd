//CODE 1048//AUMENTO DE SALARIO
#include <stdio.h>
int main()
{
    float A,R,G;
    char p = '%';
    scanf("%f",&A);
    if(A>0&&A<=400.00)
    {
        R=A/100;
        G= R*15;
        A= A+G;
        printf("Novo salario: %.2f\n",A);
        printf("Reajuste ganho: %.2f\n",G);
        printf("Em percentual: 15 %c\n",p);
    }
    else if(A>400.00 && A<=800.00)
    {
        R=A/100;
        G= R*12;
        A= A+G;
        printf("Novo salario: %.2f\n",A);
        printf("Reajuste ganho: %.2f\n",G);
        printf("Em percentual: 12 %c\n",p);
    }
    else if(A>800.00 && A<=1200.00)
    {
        R=A/100;
        G= R*10;
        A= A+G;
        printf("Novo salario: %.2f\n",A);
        printf("Reajuste ganho: %.2f\n",G);
        printf("Em percentual: 10 %c\n",p);
    }
    else if(A>1200.00 && A<=2000.00)
    {
        R=A/100;
        G= R*7;
        A= A+G;
        printf("Novo salario: %.2f\n",A);
        printf("Reajuste ganho: %.2f\n",G);
        printf("Em percentual: 7 %c\n",p);
    }
    else if(A>2000.00)
    {
        R=A/100;
        G= R*4;
        A= A+G;
        printf("Novo salario: %.2f\n",A);
        printf("Reajuste ganho: %.2f\n",G);
        printf("Em percentual: 4 %c\n",p);
    }

}