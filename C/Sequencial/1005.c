//1005 - Média 1.
#include <stdio.h>

int main(){

    double valor_A, valor_B, media;

    scanf("%lf", &valor_A);
    scanf("%lf", &valor_B);

    media = (valor_A * 3.5) + (valor_B * 7.5);
    media = media / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}