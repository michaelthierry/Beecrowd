//CODE 1051//IMPOSTO DE RENDA
#include <stdio.h>
int main()
{
    double A,B;
    scanf("%lf",&A);
    if(A>=0.00 && A<=2000.00)
    {
        printf("Isento\n");
    }
    if(A>2000.00 && A<=3000.00)
    {
      A-=2000;
      B=A*.08;
      printf("R$ %.2lf\n",B);

    }
    if(A>3000.00 && A<=4500.00)
    {
      A-=3000;
      B= A*.18+80;
      printf("R$ %.2lf\n",B);
    }
    if(A>4500.00)
    {
      A-=4500;
      B= A*.28+350;
      printf("R$ %.2lf\n",B);
    }


    return 0;
}
