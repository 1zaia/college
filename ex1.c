#include <stdio.h>

int main(){

    printf(" ********************* \n");
    printf(" * BEM-VINDO AO JOGO * \n");
    printf(" ********************* \n");

    int numSecreto = 42;

    for(int i = 0; i < 11; i++){ //um loop para que se repita a pergunta ate que a pessoa acerte ou que o numero de tentativas seja = 10
        
        int chute;
        printf("CHUTE: ");
        scanf("%d",  &chute);

        if(chute == numSecreto){
            printf("ACERTOU \n");
            i = 11;
        }
        else{
            printf("ERROU \n");

            if(chute > numSecreto){
                printf("É MAIS BAIXO O VALOR \n");
            }else{
                printf("É MAIS ALTO O VALOR \n");
            }

            if(i == 10){
                printf("ACABARAM AS SUAS CHANCES \n");
                i = 11;
            }
        }
    }

    return 0;
}