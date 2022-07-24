/**
 * @file 1048.c
 * @author michaelthierry86@gmail.com
 * @brief Aumento de salario: Esse programa le do usuario um valor que corresponde a seu
 * salario. Em seguinda ele faz um reajuste no salario com base base no quanto ele ganha.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Incluindo Biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    float salario_inicial, reajuste;
    char porcentagem = '%';
    //Lendo do usuario
    scanf("%f", &salario_inicial);
    //Avaliando o caso
    if((salario_inicial > 0) && (salario_inicial <= 400.00)){//se salario entre 0 e 400
        //Calcula o reajuste e atualiza o salario
        reajuste = (salario_inicial / 100) * 15;
        salario_inicial = salario_inicial + reajuste;
        //Mostra o resultado
        printf("Novo salario: %.2f\n", salario_inicial) ;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %c\n", porcentagem);

    }else if((salario_inicial > 400.00) && (salario_inicial <= 800.00)){//Se salario entre 400 e 800
        //Calcula o reajuste e atualiza o salario
        reajuste = (salario_inicial / 100) * 12;
        salario_inicial = salario_inicial + reajuste;
        //Mostra o resultado
        printf("Novo salario: %.2f\n", salario_inicial);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %c\n", porcentagem);

    }else if((salario_inicial > 800.00) && (salario_inicial <= 1200.00)){//Se o salario entre 800 e 1200
        //Calcula o reajuste e atualiza o salario
        reajuste = (salario_inicial / 100) * 10;
        salario_inicial = salario_inicial + reajuste;
        //Mostra o resultado
        printf("Novo salario: %.2f\n", salario_inicial) ;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %c\n", porcentagem);

    }else if((salario_inicial > 1200.00) && (salario_inicial <= 2000.00)){ //se salario entre 1200 e 2000
        //Calcula o reajuste e atualiza o salario
        reajuste = (salario_inicial / 100) * 7;
        salario_inicial = salario_inicial + reajuste;
        //Mostra o resultado
        printf("Novo salario: %.2f\n", salario_inicial) ;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %c\n", porcentagem);

    }else if(salario_inicial > 2000.00){//se salario > 2000
        //Calcula o reajuste e atualiza o salario
        reajuste = (salario_inicial / 100) * 4;
        salario_inicial = salario_inicial + reajuste;
        //Mostra o resultado
        printf("Novo salario: %.2f\n", salario_inicial) ;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %c\n", porcentagem);
    }
    //Fim do programa
    return 0;
}