#include <stdio.h>

int soma(int num1, int num2);

int main(){

    int num1 = 0, num2 = 0;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma é %d", soma(num1, num2));

    return 0;
}

int soma(int num1, int num2){
    return num1 + num2;
}