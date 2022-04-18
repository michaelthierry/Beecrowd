/**
 * @file 1040.c
 * @author your name (you@domain.com)
 * @brief Média 3
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
 
int main(){
    double nota_1, nota_2, nota_3, nota_4, exame, media;

    scanf("%lf %lf %lf %lf", &nota_1, &nota_2, &nota_3, &nota_4);

    media = (nota_1 * 2 + nota_2 * 3 + nota_3 * 4 + nota_4) / 10;

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");

    }else if(media >= 5.0){
        printf("Aluno em exame.\n");

        scanf("%lf", &exame);

        printf("Nota do exame: %.1f\n", exame);

        if(exame + media / 2.0 > 5.0){
            printf("Aluno aprovado.\n");

        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", (exame + media) / 2.0);

    }else{
      printf("Aluno reprovado.\n");
    }
 
    return 0;
}