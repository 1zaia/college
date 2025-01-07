package produtos;

public class Produto {
    //11 A
    
    protected String codProduto;
    protected String descProduto;
    private int qtdeEstoque;
    protected int Limite = 50;
    private int qtdeProdutos = 0;

    //11 B

    public Produto(String string, String descProduto, int qtdeEstoque){
        this.codProduto = string;
        this.descProduto = descProduto;
        this.qtdeEstoque = qtdeEstoque;
        qtdeProdutos++;
    }
    
    //11 C

    public int GetQtdeEstoque(){
        return qtdeEstoque;
    }

    public void SetQtdeProdutos(int qtdeEstoque){
        this.qtdeEstoque = qtdeEstoque;
    }

    //11 D
    
    public int GetLimite(){
        return Limite;
    }

    public void SetLimite(int Limite){
        this.Limite = Limite;
    }
    
    public int GetQtdeProdutos(){
        return qtdeProdutos;
    }

    public void retornaStatusEstoque(){
        if(qtdeEstoque >= Limite) 
            System.out.println("Estoque Regular");
        else if(qtdeEstoque < Limite)
            System.out.println("Limite de Segurança");
        else 
            System.out.println("Estoque nulo");
    }   


}
