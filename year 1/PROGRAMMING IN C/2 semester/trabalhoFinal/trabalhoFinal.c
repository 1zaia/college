#include <stdio.h>
#include <string.h>

//estruturas

struct Client { // all infos about clients
    char name[255];
    char CPF[12];  // Usando string para CPF, pois pode incluir zeros à esquerda.
    char address[255];
};

struct Provider { //all infos about providers
    int num_provider;
    char name[255];
    char CNPJ[12];
};

struct Functionary { //all infos about providers
    int id_functionary;
    char name[255];
    char CPF[12];
    char data_nasc[12]; //date = 00/00/0000 (i add 2 more bites if someone put some spaces)
};

struct Ingredient { //all infos about Ingredients
    int num_ingredient;
    char name[255];
    char num_provider [12]; //CNPJ do distribuidor
};

//declaracao das funcoes

void menu();
void addClient();
void addProvider();
void addFunctionary();
void addIngredient();

int main() {

    menu();

    return 0;
}

void menu() { // menu to choose what you want

    int option, verify = 1;

    while(verify == 1){
        printf("Bem-vindo(a) na nossa Pizzaria \n");
        printf("\n");
        printf("Opção 1: Adicionar Cliente \n");
        printf("Opção 2: Adicionar Distribuidor \n");
        printf("Opção 3: Adicionar Funcionario \n");
        printf("Opção 4: Adicionar Ingrediente \n");
        printf("Opção: ");
        scanf("%d", &option);

        switch (option){

            case 1:
                addClient();
                verify = 1;
                break;
            case 2:
                addProvider();
                verify = 1;
                break;
            case 3:
                addFunctionary();
                verify = 1;
                break;
            case 4:
                addPizza();
                verify = 1;
                break;
            default:
                printf("Error: THIS OPTION NOT EXIST \n");
                verify = 0;
                break;
        }
    }

}

void addClient() { // Add Client on dataBase

    int times = 0;
    
    printf("Quantos clientes você deseja adicionar: ");
    scanf("%d", &times); 

    struct Client clients[times]; 

    for (int i = 0; i < times; i++) {
        printf("\nCliente %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", clients[i].name); 

        printf("CPF: ");
        scanf("%s", clients[i].CPF);

        printf("Endereço: ");
        scanf(" %[^\n]s", clients[i].address); 
    }

}

void addProvider(){ //Add provider on dataBase
    int times = 0;
    
    printf("Quantos distribuidores você deseja adicionar: ");
    scanf("%d", &times); 

    struct Provider provider[times]; 

    for (int i = 0; i < times; i++) {
        provider->num_provider = i + 1;
        printf("\n Distribuidor %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", provider[i].name); 

        printf("CNPJ: ");
        scanf("%s", provider[i].CNPJ);

    }

}

void addFunctionary(){ //Add functionary on dataBase
    int times = 0;
    
    printf("Quantos funcionarios você deseja adicionar: ");
    scanf("%d", &times); 

    struct Functionary func[times]; 

    for (int i = 0; i < times; i++) {

        func.id_functionary = i + 1;

        printf("\n Funcionario %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", func[i].name); 

        printf("CPF: ");
        scanf("%s", func[i].CPF);

        printf("Data de Nascimento (DD/MM/AAAA): ");
        scanf(" %[^\n]s", func[i].data_nasc); 
    }
}

void addIngredient(){ //Add ingredient on dataBase
    int times = 0;
    
    printf("Quantos funcionarios você deseja adicionar: ");
    scanf("%d", &times); 

    struct Ingredient ingr[times]; 

    for (int i = 0; i < times; i++) {

        ingr.id_functionary = i + 1;

        printf("\n Funcionario %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", ingr[i].name); 

        printf("CPF do distribuidor: ");
        scanf(" %[^\n]s", ingr[i].num_provider); 
    }

}