#include <stdio.h>

int somaVetor(int num[3]);

int main(){

    int num[3];

    for(int i = 0; i < 3; i++){
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    printf("A soma é %d",somaVetor(num));

    return 0;
}

int somaVetor(int num[3]){
    int soma = 0;

    for(int i = 0; i < 3; i++){
        soma += num[i];
    }

    return soma;
}