package fibonacci;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){

        int posicao = 0;
        int MaxArray = 10000000;
                
        System.out.println("Escreva uma posicao de fibonacci: ");
        try (Scanner scan = new Scanner(System.in)) {
            posicao = scan.nextInt();
        }
        int[] fibonacci = new int[MaxArray];

        fibonacci[0] = 0;
        fibonacci[1] = 1;

        switch(posicao) {
            case 0:
                System.out.println("-- Sequencia de Fibonacci -- ");
                break;
            case 1:
                System.out.println("-- Sequencia de Fibonacci -- ");
                System.out.println(fibonacci[0]);
                break;
            default:
                System.out.println("-- Sequencia de Fibonacci -- ");
                System.out.print(fibonacci[0]);
                System.out.print(" ");
                System.out.print(fibonacci[1]);
                System.out.print(" ");
                for(int i = 2; i < posicao; i++){
                    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
                    System.out.print(fibonacci[i]);
                    System.out.print(" ");
                }   break;
        }
    
    }
}