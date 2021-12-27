//1009 - Salario com bonus
#include <stdio.h>

int main(){

    char nome[20];
    double salario, vendas;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    vendas = (vendas / 100) * 15;
    salario = salario + vendas;

    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}