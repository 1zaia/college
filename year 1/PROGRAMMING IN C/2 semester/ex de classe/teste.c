#include <stdio.h>

int main(){

    int num = 0, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Numero: ");
        scanf("%d", &num);

        if(num % 2 == 0 )
            soma += num;
    }

    printf("Soma = %d", soma);

    return 0;
}