#include <stdio.h>
#include <math.h>

int main(){

    int opcao;

    printf("Escolha qual exercicio deseja ver (lembre-se de ignorar os pontos): ");
    scanf("%d", &opcao);

    int numInt, num1, num2, num3, soma;
    int numSuc, numAnt, a, b;
    float numReal, nota1, nota2, nota3, nota4,media;
    float ValorReal, CotDolar, ValorDolar, salario;
    float newValue;

    switch (opcao)
    {
    case 11:

        printf("Escreva um numero inteiro: ");
        scanf("%d", &numInt);
        printf("O numero digitado foi o %d", numInt);

        break;

    case 12:

        printf("Escreva um numero real: ");
        scanf("%f", &numReal);
        printf("O numero digitado foi o %d", numReal);

        break;

    case 13:

        printf("Escreva 3 valores (com apenas 1 espaco entre eles): ");
        scanf("%d %d %d", num1, num2,num3);

        soma = num1 + num2 + num3;

        printf("A soma entre os valores e %d", soma);

        break;

    case 14:

        printf("Escreva um numero real: ");
        scanf("%f", &numReal);

        numReal *= numReal ;

        printf("O quadrado do numero é %d", numReal);

        break;

    case 15:

        printf("Escreva quatro notas: ");
        scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4 );

        media = (nota1 + nota2 + nota3 + nota4) / 4;

        printf("A media das notas é %.2f", media);        

        break;

    case 16:

        printf("Escreva o valor em real: ");
        scanf("%f", &ValorReal);
        printf("\nCotacao Dolar: ");
        scanf("%f", &CotDolar);

        ValorDolar = ValorReal * CotDolar;

        printf("Voce possui %.2f dolares");

        break;

    case 17:

        printf("Escreva um numero inteiro: ");
        scanf("%d", &numInt);

        numAnt = numInt - 1;
        numSuc = numInt + 1;

        printf("O sucessor e %d", numSuc);
        printf("\nO anterior e %d", numAnt);

        break;

    case 18:

        printf("Adicione o salario: ");
        scanf("%f", &salario);

        salario +=(salario * 0.05);

        printf("O salario final sera: ", salario); 

        break;

    case 21:

        printf("Valor de a: ");
        scanf("%d", &a);
        printf("Valor de b: ");
        scanf("%d", &b);

        if (a > b)
            printf("O 'a' é maior que o 'b'");                  
        else if (b > a)
            printf("O 'b' é maior que o 'a'"); 
        else
            printf("Os numeros sao iguais");

        break;

    case 22:

        printf("Escreva um numero: ");
        scanf("%f", &numReal);

        if(numReal > 0){
            newValue= sqrt(numReal);
            printf("A raiz de este numero é %.4f", newValue);
        }
        else
            printf("Numero invalido");

        break;

    case 23:

        printf("Escreva um numero: ");
        scanf("%f", &numReal);

        if(numReal > 0){
            newValue= sqrt(numReal);
            printf("A raiz de este numero e %.4f", newValue);
        }
        else{
            newValue = numReal * numReal;
            printf("O numero ao quadrado seria: %f ", newValue);
        }

        break;

    case 24:

        printf("Escreva um numero: ");
        scanf("%f", &numReal);

        if(numReal > 0){
            newValue= sqrt(numReal);
            printf("A raiz de este numero e %.4f", newValue);
            newValue = numReal * numReal;
            printf("\nO numero ao quadrado seria: %f ", newValue);
        }

        break;

    case 25:

        printf("Digite um numero inteiro: ");
        scanf("%d", &numInt);

        if (numInt % 2 == 0) {
            printf("O numero é par");
        } else {
            printf("O numero é impar");
        }
        break;

    case 26:

        printf("Valor de a: ");
        scanf("%d", &a);
        printf("Valor de b: ");
        scanf("%d", &b);

        if (a > b){
            printf("O 'a' é maior que o 'b'");
            newValue = a - b;
            printf("\nA diferenca entre ele e de %d", newValue); 
        }else if (b > a){
            printf("O 'b' é maior que o 'a'"); 
            newValue = b - a;
            printf("\nA diferenca entre ele e de %d", newValue); 
        }else{
            printf("Os numeros sao iguais e nao ha diferenca entre eles");
        }

        break;

    case 27:

        printf("Valor de a: ");
        scanf("%d", &a);
        printf("Valor de b: ");
        scanf("%d", &b);

        if (a > b)
            printf("O 'a' é maior que o 'b'");                  
        else if (b > a)
            printf("O 'b' é maior que o 'a'"); 
        else
            printf("Os numeros sao iguais");
        break;

    case 28:

        printf("Insira 2 notas (com um espaco entre eles): ");
        scanf("%f %f", &nota1, &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
        media = (nota1 + nota2) / 2;
        printf("A média das notas é: %.2f\n", media);
    } else {
        printf("Entradas de dados incorretas!\n");
    }

        break;

    default:

        printf("Valor salario: ");
        scanf("%f", &salario);
        printf("\nValor prestacao do emprestimo: ");
        scanf("%f", &numReal);

        if(numReal > (salario * 0.2)){
            printf("Emprestimo NAO CONCEDIDO!");
        }else{
            printf("Emprestimo CONCEDIDO!");
        }

        break;

    }

    return 0;
}