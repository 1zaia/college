package carro;

/*
 * public -> qualquer classe pode acessar (ler ou mudar o valor)
 * protected -> Apenas a propria classe e as classes filhas (ler ou mudar)
 * private -> Apenas a propria classe pode (ler ou mudar)
 */

public class Main {
    public static void main(String[] args) {
        Carro carrera = new Carro();
        
        carrera.marca = "Porshe";
        carrera.cor = "Azul";
        carrera.ano = 2024;
        carrera.setPreco(2000000F);

        System.out.println(carrera.quantidadeDeRodas);
        carrera.Ligar(true);
        carrera.Acelerar(60f);
        carrera.Frear();
        carrera.Ligar(false);
        System.out.println("Seu carro custa: " + carrera.GetPreco());

    }
}
