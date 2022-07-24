/**
 * @file 1040.c
 * @author michaelthierry86@gmail.com
 * @brief Média 3: Esse programa lê as 4 notas de um aluno e calcula a media
 * Se a media estiver entre 5 e 7 o aluno tera que faze um exame e sua media é recalculado
 * Se a media for maior do que 7 passa se for menor do que 5 reprova
 * @version 0.1
 * @date 2022-04-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Inclui Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando Variaves
    double nota_1, nota_2, nota_3, nota_4, media;
    //Lendo do usuario
    scanf("%lf %lf %lf %lf", &nota_1, &nota_2, &nota_3, &nota_4);
    //Calculando media
    media = (nota_1 * 2 + nota_2 * 3 + nota_3 * 4 + nota_4) / 10;
    //Mostra a media
    printf("Media: %.1f\n", media);
    //Avalia se aluno vai ter que fazer o exame
    if(media >= 7.0){
        printf("Aluno aprovado.\n");

    }else if(media >= 5.0){
        //Declarando variavel
        double exame;
        //Mostra que o aluno esta de exame
        printf("Aluno em exame.\n");
        //Le a nota do exame
        scanf("%lf", &exame);
        //Mostra a nota do Exame
        printf("Nota do exame: %.1f\n", exame);
        //Avalia e o aluno passou
        if((exame + media / 2.0) > 5.0){
            //Mostra a mesagem
            printf("Aluno aprovado.\n");

        }else{//senao
            //Mostra a mensagem
            printf("Aluno reprovado.\n");
        }
        //Mostra a media final
        printf("Media final: %.1lf\n", (exame + media) / 2.0);

    }else{//senão
        //Mostra a mensagem
        printf("Aluno reprovado.\n");
    }
    //Fim do programa
    return 0;
}