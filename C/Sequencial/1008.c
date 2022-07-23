/**
 * @file 1008.c
 * @author michaelthierry86@gmail.com
 * @brief Salário: Esse programa le um numero de  funcionario, o numero
 * de horas trabalhadas e o salario. O salario é recalculado com base nas horas 
 * trabalhas e enfim é mostrado o numero do funcionario e o novo salario
 * @version 0.1
 * @date 2022-02-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca E/S*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Variaveis declaradas.
    int numero_funcionario, numero_horas;
    double salario;
    //Lendo do usuario.
    scanf("%i", &numero_funcionario);
    scanf("%i", &numero_horas);
    scanf("%lf",&salario);
    //Calculando novo salario pelas horas.
    salario = salario * numero_horas;
    //Mostrando o resultado.
    printf("NUMBER = %i\n", numero_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}