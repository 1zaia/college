#include <stdio.h>

int somatorio(int num);

int main(){

    int num = 0;

    printf("Quantas vezes vc quer ver o somatorio?\n");
    printf("Numero de vezes: ");
    scanf("%d", &num);

    printf("O resultado é %d", somatorio(num));

    return 0;
}

int somatorio(int num){
    int soma = 0;

    for(int i = 1; i <= num; i++){
        soma = ((5*i*i) + (2 * i) + 8);
    }

    return soma;
}