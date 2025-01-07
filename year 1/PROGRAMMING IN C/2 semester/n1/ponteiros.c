#include <stdio.h>

int main(){

    int x = 10;
    int y = 20;

    // como declarar ponteiros

    int *PonteiroX = &x;
    int *PonteiroY = &y;

    printf("Valor de x: %d\n", *PonteiroX);
    printf("Valor de y: %d\n", *PonteiroY);

    *PonteiroX = 30;
    *PonteiroY = 40;

    printf("Valor de x: %d\n", *PonteiroX);
    printf("Valor de y: %d\n", *PonteiroY);
    printf("Valor da variavel x: %d\n", x);
    printf("Valor da variavel y: %d\n", y);

    return 0;
}