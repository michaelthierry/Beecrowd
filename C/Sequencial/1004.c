//1004 - Produto Simples.
#include <stdio.h>

int main(){

    int valor_A, valor_B, produto;

    scanf("%i", &valor_A);
    scanf("%i", &valor_B);

    produto = valor_A * valor_B;

    printf("PROD = %i\n", produto);

    return 0;
}