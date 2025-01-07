#include <stdio.h>

int main(){

    int num, matriz[num][num];

    printf("Tamanho: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            if(j <= i){
                printf("%d",j + 1);
                matriz[i][j] = j + 1;
            }else{
                printf("0");
                matriz[i][j] = 0;   
            }           
        }
        printf("\n");
    }

    return 0;
}