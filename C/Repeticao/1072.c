/**
 * @file 1072.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Intervalos 2: Esse programa recebe do usuario um numero que representa quantos numeros ele 
 * digitará em seguida. Para cada valor que o usuario inserir ele contabiliza quantos valores estão entre o intervalo aberto [10, 20]. Em seguida mostra quantos estão fora e quantos estão dentro do intervalo
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/*Include biblioteca*/
#include <stdio.h>
/*Função Principal*/
int main(){
    //Declarando variaveis
    int iterador, valor, quantidade;
    int dentro_do_intervalor, fora_do_intervalo;
    //Lendo do usuario
    scanf("%i", &quantidade);
    //inicializando variaveis
    dentro_do_intervalor = 0;
    fora_do_intervalo = 0;
    iterador = 0;
    //ate iterador for igual a quantidade;
    while(iterador < quantidade){
        //lendo do usuario
        scanf("%i", &valor);
        //se estiver dentro do intervalor
        if((valor >= 10) && (valor <= 20)){
            dentro_do_intervalor++;
        }else{
            fora_do_intervalo++;
        }
        //Incrementa iterador
        iterador++;
    }
    //Mostrando o resultado
    printf("%i in\n", dentro_do_intervalor);
    printf("%i out\n", fora_do_intervalo);
    //Fim do programa
    return 0;
}