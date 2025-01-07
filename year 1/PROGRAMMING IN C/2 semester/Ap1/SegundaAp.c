#include <stdio.h>

int main(){

    int matrix[3][5];
    int points = 0;
    int ganhador = 0;

    for(int i = 0; i < 3; i++){
        printf("Pontuação Jogador %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Pontuação dos jogadores: \n");

    for(int i = 0; i < 3; i++){
        int pontuacaoJogador = 0;
        for(int j = 0; j < 5; j++){
            pontuacaoJogador += matrix[i][j];
        }
            if(pontuacaoJogador > ganhador){
                ganhador = pontuacaoJogador;
                points = i + 1; 
            }
        printf("Jogador %d : %d \n", i + 1, pontuacaoJogador);
    }

    printf("Vencedor Jogador %d", points);

    return 0;
}