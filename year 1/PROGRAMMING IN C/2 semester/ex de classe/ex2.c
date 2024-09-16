#include <stdio.h>

int main() {
    int opcao = 0;
    
    // Variáveis padronizadas
    int numero = 0;
    int num1 = 0, num2 = 0, resultado = 0;
    float num3 = 0.0f, media = 0.0f;
    int numeros[5];
    int soma = 0;
    int tempCel = 0, tempFah = 0;
    int a = 0, b = 0, x = 0;
    float metadeNum = 0.0f;
    int dobroNum = 0;

    printf("Dentro da Lista 2, o ex que deseja ver: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Olá Mundo! \n");
        break;

    case 2:
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        printf("Voce digitou %d \n", numero);
        break;

    case 3:
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num2);

        resultado = num1 + num2;
        printf("A soma deles é %d", resultado);
        break;

    case 4:
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num2);

        resultado = num1 - num2;
        printf("A subtracao deles é %d", resultado);
        break;

    case 5:
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num2);

        resultado = num1 * num2;
        printf("A multiplicacao deles é %d", resultado);
        break;

    case 6:
        printf("Digite um numero inteiro: ");
        scanf("%d", &num1);
        printf("Digite outro numero inteiro: ");
        scanf("%d", &num2);

        if (num2 == 0) {
            printf("Nao existe divisao por 0");
        } else {
            resultado = num1 / num2;
            printf("A divisao deles é %d", resultado);
        }
        break;

    case 7:
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("O numero é par");
        } else {
            printf("O numero é impar");
        }
        break;

    case 8:
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        
        resultado = numero * numero;

        printf("O quadrado de %d é %d", numero, resultado);
        break;

    case 9:
        printf("Digite um numero: ");
        scanf("%f", &num3);
        printf("Digite outro numero: ");
        scanf("%f", &num1);
        printf("Digite outro numero: ");
        scanf("%f", &num2);

        media = (num3 + num1 + num2) / 3;

        printf("A media entre %f, %f, %f é %.2f", num3, num1, num2, media);        
        break;

    case 10:
        printf("Digite um numero: ");
        scanf("%d", &numero);

        dobroNum = numero * 2;
        metadeNum = numero / 2.0f;

        printf("A metade de %d é %.2f \n", numero, metadeNum);
        printf("O dobro de %d é %d", numero, dobroNum);       
        break;

    case 11:
        printf("Digite um numero: ");
        scanf("%d", &a);
        printf("Digite outro numero: ");
        scanf("%d", &b);

        printf("O valores iniciais sao: a = %d, b = %d \n", a, b);
        x = a;
        a = b;
        b = x;
        printf("O valores finais sao: a = %d, b = %d \n", a, b);
        break;

    case 12:
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

    case 13:
        for (int i = 0; i < 5; i++) {
            printf("Digite um numero: ");
            scanf("%d", &numeros[i]);
        }
        for (int i = 0; i < 5; i++) {
            if (numeros[i] % 2 == 0) {
                soma += numeros[i];
            }
        }
        printf("A soma dos numeros pares é: %d", soma);
        break;

    case 14:
        printf("Digite um numero: ");
        scanf("%d", &numero);     
        if (numero % 5 == 0)
            printf("O numero é multiplo de 5");
        else 
            printf("O numero nao é multiplo de 5");
        break;

    default:
        printf("Me de a temperatura em Celsius: ");
        scanf("%d", &tempCel);

        tempFah = tempCel * 9 / 5 + 32;

        printf("A temperatura em Fahrenheit é %d", tempFah);
        break;
    }

    return 0;

}