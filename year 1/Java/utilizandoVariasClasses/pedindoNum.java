package utilizandoVariasClasses;
import java.util.Scanner;

//caso nao diga que é publico, assume-se que é privado

public class pedindoNum {
    double num1, num2,num3;
    double x1, x2;
    
    void Numero(){

        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Digite uma raiz da equação:");
            num1 = scanner.nextInt();
   
            System.out.print("Digite uma raiz da equação:");
            num2 = scanner.nextInt();

            System.out.print("Digite uma raiz da equação:");
            num3 = scanner.nextInt();
        }

    }

    boolean Testar(){
        if(num1 > 0 && num2*num2 + 4*num1*num3 >= 0){
            return true;
        }else return false;
    }

    public void Equacao(){
        Numero();

        if(Testar() == true){
            x1 = (Math.sqrt(num2*num2 + 4*num1*num3) + num2)/2*num1;
            x1 = (Math.round(x1*100))/100;
            x2 = (Math.sqrt(num2*num2 + 4*num1*num3) - num2)/2*num1;
            x2 = (Math.round(x1*100))/100;

            if(x1 == x2){
                System.out.println("Só tem 1 raiz, que é " + x1);
            }else{
                System.out.println("A primeira raiz é " + x1);
                System.out.println("A segunda raiz é " + x2);
            }
        }
    }
}