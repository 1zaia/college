public class aula2{

    //variavel global
    public static int senha = 1234;

    public static void somar(){
        System.out.println(2+3);
    }

    public static float multiplicar(){
        return 2f * 3f;
    }

    public static int subtrair(int a , int b){
        return a - b;
    }

    public static boolean validarSenha(int snh){
        /*if(senha == snh){
            return true;
        }else{
            return false;
        }*/

        if(senha == snh) return true;
        else return false;
    }

    public static void main(String[] args){

        //variaveis
        System.out.println("VARIAVEIS: ");
        int a = 1;
        float b = 2.0f;
        double c = 3.0;
        String d = "oi";
        boolean e = true;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
        System.out.println(e);
        System.out.println(" ");

        // condicionais
        System.out.println("CONDICIONAIS: ");
        if(a == 1){
            System.out.println("a igual a 1");
        }else{
            System.out.println("a nao e igual a 1");
        }
        System.out.println(" ");
        
        //loops 
        System.out.println("FOR : ");   
        for(int i = 0; i < 10; i++){
            System.out.println(i);
        }
        System.out.println(" ");

        System.out.println("WHILE: ");
        while(a < 10){
            System.out.println(a);
            a++;
        }
        System.out.println(" ");

        //array
        System.out.println("ARRAY: ");
        int[] myArray = new int[10];
        myArray[0] = 1;
        System.out.println(myArray[0]);
        String[] carros = {"nissan", "toyota"};
        System.out.println(carros[0]);
        System.out.println(carros[1]);
        System.out.println(" ");

        //funcoes
        System.out.println("FUNCOES: ");
        /*funcoes sao blocos de instrucoes que sao executadas quando chamadas atraves do Nome() da funcao*/
        somar();
        System.out.println( multiplicar() );
        System.out.println( subtrair(3, 2) );
        System.out.println(validarSenha(1234));
        System.out.println(" ");

    }
}