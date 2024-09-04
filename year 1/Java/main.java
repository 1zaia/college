import java.util.Scanner;

public class main{
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        
        if(a % 2 == 0){
            System.out.println("Numero é par");
        }else{
            System.out.println("Numero é impar");
        }

    }

}