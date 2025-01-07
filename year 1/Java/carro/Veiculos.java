package carro;

public class Veiculos {
    
    public int quantidadeDeRodas;
    public String cor;
    protected  String marca;
    public int ano;
    private float preco;
    public boolean estaLigado = false;

    public Veiculos(){

    }

    public float GetPreco(){
        return this.preco;
    }

    public void setPreco(float prc){
        this.preco = prc;
    }

    public void Ligar(boolean lig){
        if(lig && !estaLigado){
            System.out.println("Ligado");
        }else {
            System.out.println("Veiculo desligado");
        }
        
    }
    
    public void Acelerar(float vel){
        if(estaLigado){
            System.out.println("Velocidade : " + vel);
        }else{
            System.out.println("Ligue o veiculo");
        }
        
    } 

    public void Frear(){
        System.out.println("Parado");
    }

    public void Vender(){
        System.out.println("Vendido por: " + preco);
    }
}
