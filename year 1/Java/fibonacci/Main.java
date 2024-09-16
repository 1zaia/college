package fibonacci;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){

        int MaxArray = 10000000;
                
        System.out.println("Escreva uma posicao de fibonacci: ");
        Scanner scan = new Scanner(System.in);
        int posicao = scan.nextInt();
        
        int[] fibonacci = new int[MaxArray];

        fibonacci[0] = 0;
        fibonacci[1] = 1;

        if(posicao == 0){
            System.out.println("-- Sequencia de Fibonacci -- ");
        }else if(posicao == 1){
            System.out.println("-- Sequencia de Fibonacci -- ");
            System.out.println(fibonacci[0]);
        }else{
            System.out.println("-- Sequencia de Fibonacci -- ");
            System.out.print(fibonacci[0]);
            System.out.print(" ");
            System.out.print(fibonacci[1]);
            System.out.print(" ");

            for(int i = 2; i < posicao; i++){
                fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
                System.out.print(fibonacci[i]);
                System.out.print(" ");
            }
        }
    
    }
}