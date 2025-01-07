#include<stdio.h>

void fibonacci(int num);

int main(){

    int num = 0;
    printf("Quantos numeros voce deseja da sequencia de fibonnaci: ");
    scanf("%d",&num);

    if(num == 0){
        printf("\n-----------------------\n");
        printf(" SEQUENCIA DE FIBONACCI ");
        printf("\n-----------------------\n");
    }else if(num == 1){
        printf("\n-----------------------\n");
        printf(" SEQUENCIA DE FIBONACCI ");
        printf("\n-----------------------\n");
        printf("Numeros: \n 0");
    }else if(num == 2){
        printf("\n-----------------------\n");
        printf(" SEQUENCIA DE FIBONACCI ");
        printf("\n-----------------------\n");
        printf("Numeros: \n 0 \n 1");
    }else{
        fibonacci(num);
    }

    return 0;
}

void fibonacci(int num){
    int sequencia[num];

    sequencia[0] = 0;
    sequencia[1] = 1;
    printf("\n-----------------------\n");
    printf(" SEQUENCIA DE FIBONACCI ");
    printf("\n-----------------------\n");
    printf("Numeros: %d \n", sequencia[0]);
    printf("%d \n", sequencia[1]);
    for(int i = 2; i < num; i++){
        sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
        printf("%d \n", sequencia[i]);
    }
}