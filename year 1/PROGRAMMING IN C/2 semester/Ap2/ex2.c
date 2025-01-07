#include <stdio.h>

float MediaEscola(int quantidadeSalas ,int mediasSalas[quantidadeSalas]);
float MediaSala(int quantidadeDeAlunos,int notas[quantidadeDeAlunos]);

int main(){

    int salas = 0, quantidadeAlunos = 0, notas[quantidadeAlunos], notasSalas[salas];

    printf("Me de a quantidade de salas que ha na escola:");
    scanf("%d", &salas);

    for(int i = 0; i < salas ; i++){
        printf("\nQuantidade de alunos na sala %d : ", i + 1);
        scanf("%d",&quantidadeAlunos);

        for(int j = 0; j < quantidadeAlunos; j++){
            printf("Digite a nota do aluno %d : ", j + 1);
            scanf("%d", &notas[j]);
        }

        printf("A media da sala %d e : %.2f", i ,MediaSala(quantidadeAlunos, notas));

        notasSalas[i] = MediaSala(quantidadeAlunos, notas);      
    }
    
    printf("\n--------------------------");
    printf("\nA media da escola e %.2f ", MediaEscola(salas, notasSalas));
    printf("\n--------------------------");

    return 0;
}

float MediaSala(int quantidadeDeAlunos ,int notas[quantidadeDeAlunos]){
    float media = 0;
    for(int i = 0; i < quantidadeDeAlunos; i++){
        media += notas[i];
    }
    return media/quantidadeDeAlunos;
}

float MediaEscola(int quantidadeSalas, int mediasSalas[quantidadeSalas]){
    float media = 0;
    for(int i = 0; i < quantidadeSalas; i++){
        media += mediasSalas[i];
    }
    return media / quantidadeSalas;
}