//1008 - Salário.
#include <stdio.h>

int main(){

    int numero_funcionario, numero_horas;
    double salario;

    scanf("%i", &numero_funcionario);
    scanf("%i", &numero_horas);
    scanf("%lf",&salario);
    
    salario = salario * numero_horas;

    printf("NUMBER = %i\n", numero_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}