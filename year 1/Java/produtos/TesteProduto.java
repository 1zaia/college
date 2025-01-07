package produtos;
import java.util.Scanner;

public class TesteProduto extends Produto {
    public TesteProduto(String string, String descProduto, int qtdeEstoque) {
        super(string, descProduto, qtdeEstoque);
    }

    //12
    Produto p1 = new Produto("1", null,0);
    Produto p2 = new Produto("AB998X","Volkswagen TCROSS",20);

    public void imprimeQtdeProdutos(){
        p2.GetQtdeProdutos();
    }

    public void StatusProdutos(){
        p1.GetQtdeEstoque();
        p2.GetQtdeEstoque();
    }

    public void ChangeLimit(){
        int lim = 0;

        Scanner scan = new Scanner(System.in);
        System.out.print("Qual o novo valor do Limite de Segurança? R: ");
        scan.nextInt(lim);
        
        p1.SetLimite(lim);
    }

}
