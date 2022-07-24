/**
 * @file 1049.c
 * @author michaelthierry86@gmail.com
 * @brief Animal: Esse programa lê três palavras do usuario das quais 
 * classificam um animal. Em seguinda ele mostra a qual animal leva a escolha das 
 * palavras.
 * @version 0.1
 * @date 2022-07-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Importando biblioteca*/
#include <stdio.h>
#include <string.h>
/*Função principal*/
int main(){
    //Declarando variavel
    char *primeira_palavra;
    //Lendo a primeiro palavra do usuario
    scanf("%s", primeira_palavra);
    //Avaliando os casos
    if(0 == strcmp(primeira_palavra, "vertebrado")){
        //Declarando a variavel
        char *segunda_palavra;
        //Lendo a segunda palavra do usuario
        scanf("%s", segunda_palavra);
        //Avaliando o caso
        if(0 == strcmp(segunda_palavra, "ave")){
            //Declarando a variavel
            char *terceira_palavra;
            //Lendo a terceira palavra do usuario
            scanf("%s", terceira_palavra);
            //Avaliando o caso
            if(0 == strcmp(terceira_palavra, "carnivoro")){
                //Mostra o resultado
                printf("aguia\n");

            }else if(0 == strcmp(terceira_palavra, "onivoro")){
                //Mostra o resultado
                printf("pomba\n");
            }

        }else if(0 == strcmp(segunda_palavra, "mamifero")){
            //Declarando varaivel
            char *terceira_palavra;
            //Lendo a terceira palavra do usuario
            scanf("%s", terceira_palavra);
            //Avaliando o caso
            if (0 == strcmp(terceira_palavra, "onivoro")){
                //Mostra o resultado
                printf("homem\n");

            }else if(0 == strcmp(terceira_palavra, "herbivoro")){
                //Mosta o resultado
                printf("vaca\n");

            }
        }
    }else if(0 == strcmp(primeira_palavra, "invertebrado")){
        //Declarando variavel
        char *segunda_palavra;
        //Lendo a segunda palavra do usuario
        scanf("%s", segunda_palavra);
        //Avaliando o caso
        if(0 == strcmp(segunda_palavra, "inseto")){
            //Declarando varaivel
            char *terceira_palavra;
            //Lendo do usuario
            scanf("%s", terceira_palavra);
            //Avaliando o caso
            if(0 == strcmp(terceira_palavra, "hematofago")){
                //Mostra resultado
                printf("pulga\n");

            }else if(0 == strcmp(terceira_palavra, "herbivoro")){
                //Mostra o resultado
                printf("lagarta\n");

            }
            
        }else if(0 == strcmp(segunda_palavra, "anelideo")){
            //Declarando varaivel
            char *terceira_palavra;
            //Lendo a terceira palavra do usuario
            scanf("%s", terceira_palavra);
            //Avaliando o resultado
            if(0 == strcmp(terceira_palavra, "hematofago")){
                //Mostra o resultado
                printf("sanguessuga\n");

            }else if(0 == strcmp(terceira_palavra, "onivoro")){
                //Mostra o resultado
                printf("minhoca\n");

            }
        }
    }
    //fim do programa
    return 0;
}
