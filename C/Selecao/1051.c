/**
 * @file 1051.c
 * @author michaelthierry86@gmail.com
 * @brief Imposto de Renda: Esse programa lê o salario do usuario e mostra o quanto
 * é combrado de imosto do caso.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluido Biblioteca*/
#include <stdio.h>
/*Função principal*/
int main(){
    //Declarando variaveis
    double renda, imposto;
    //Lendo do usuario
    scanf("%lf", &renda);
    //Avaliando o caso
    if((renda >= 0.00) && (renda <= 2000.00)){//Renda entre 0 e 2000
        //Mostra a mensagem
        printf("Isento\n");
    }
    if((renda > 2000.00) && (renda <= 3000.00)){//renda entre 2000 e 3000
        //Calcula o imposto
        renda -= 2000;
        imposto = renda * 0.08;
        //Mostra a mensagem
        printf("R$ %.2lf\n", imposto);

    }
    if((renda > 3000.00) && (renda <= 4500.00)){//renda entre 3000 e 4500
        //Calcula o imposto
        renda -= 3000;
        imposto = (renda * 0.18) + 80;
        //Mostra resultado
        printf("R$ %.2lf\n", imposto);
    }
    if(renda > 4500.00){//renda superior a 4500
        //Calcula o imposto
        renda -= 4500;
        imposto = (renda * 0.28) + 350;
        //Mostra o resultado
        printf("R$ %.2lf\n", imposto);
    }
    //Fim do programa
    return 0;
}
