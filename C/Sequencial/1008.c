/**
 * @file 1008.c
 * @author your name (you@domain.com)
 * @brief Salário.
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
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