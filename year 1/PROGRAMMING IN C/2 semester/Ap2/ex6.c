#include <stdio.h>

int numMaior(int num1,int num2);

int main(){

    int num1 = 0, num2 = 0;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("%d é o maior", numMaior(num1, num2));

    return 0;
}

int numMaior(int num1, int num2){
    if(num1 > num2) return num1;
    else return num2;
}