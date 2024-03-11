#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void addition(){ // 1 opcao do MathGame
    int num1, num2, result, mistake, hits;
    char playAgain;
    bool option = false;

    while(!option){

        srand(time(NULL));
                
        for (int i = 1 ; i < 6 ; i++ ){

            num1 = rand() % 10;
            num2 = rand() % 10;

            cout << num1 << " + " << num2 << " = ";
            cin >> result;

            if (result == num1 + num2){

                cout << "VERY NICE!" << endl;
                hits++;
                            
            } else {
                            
                cout << "ERROR!" << endl;
                mistake++;

            }
        }
        
        cout << "YOU HAVE DONE " << hits << " HITS AND " << mistake << " MISKTAKES" << endl; 
        cout << "DID YOU WANNA PLAY AGAIN? (y / n)";
        cin >> playAgain;

        if(playAgain == 'y' || playAgain == 'Y'){

            option = false;

        }else if(playAgain == 'n' || playAgain == 'N'){

            option = true;
        }              
    }

}

void subtraction(){ // 2 Opcao do Mathgame
    int num1, num2, result, mistake, hits;
    char playAgain;
    bool option = false;

    while(!option){

        srand(time(NULL));
                
        for (int i = 1 ; i < 6 ; i++ ){

            num1 = rand() % 10;
            num2 = rand() % 10;

            cout << num1 << " - " << num2 << " = ";
            cin >> result;

            if (result == num1 - num2){

                cout << "VERY NICE!" << endl;
                hits++;
                            
            } else {
                            
                cout << "ERROR!" << endl;
                mistake++;

            }
        }
        
        cout << "YOU HAVE DONE " << hits << " HITS AND " << mistake << " MISKTAKES" << endl; 
        cout << "DID YOU WANNA PLAY AGAIN? (y / n)";
        cin >> playAgain;

        if(playAgain == 'y' || playAgain == 'Y'){

            option = false;

        }else if(playAgain == 'n' || playAgain == 'N'){

            option = true;
        }              
    }

}

void multiplication(){ //3 opcao do MathGame

    int num1, num2, result, mistake, hits;
    char playAgain;
    bool option = false;

    while(!option){

        srand(time(NULL));
                
        for (int i = 1 ; i < 6 ; i++ ){

            num1 = rand() % 10;
            num2 = rand() % 10;

            cout << num1 << " * " << num2 << " = ";
            cin >> result;

            if (result == num1 * num2){

                cout << "VERY NICE!" << endl;
                hits++;
                            
            } else {
                            
                cout << "ERROR!" << endl;
                mistake++;

            }
        }
        
        cout << "YOU HAVE DONE " << hits << " HITS AND " << mistake << " MISKTAKES" << endl; 
        cout << "DID YOU WANNA PLAY AGAIN? (y / n)";
        cin >> playAgain;

        if(playAgain == 'y' || playAgain == 'Y'){

            option = false;

        }else if(playAgain == 'n' || playAgain == 'N'){

            option = true;
        }              
    }
}

void easy(){ // dificultade facil no jogo das tabuadas

    int num1,result , hits;
    bool number = false;


    while(!number){
        srand(time(NULL));
        num1 = rand() % 10;

        if(num1 <= 3 || num1 == 10){
            number = true;
        }else{
            number = false;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << num1 << " * " << i << " = ";
        cin >> result;

        if(result == num1*i){
            hits++;
        }
    }

    cout << "YOU MAKE " << hits << " CORRECT ANSWER " << endl;
}

void medium(){ // dificultade facil no jogo das tabuadas

    int num1,result , hits;
    bool number = false;


    while(!number){
        srand(time(NULL));
        num1 = rand() % 10;

        if(num1 <= 6 || num1 == 10){
            number = true;
        }else{
            number = false;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << num1 << " * " << i << " = ";
        cin >> result;

        if(result == num1*i){
            hits++;
        }
    }

    cout << "YOU MAKE " << hits << " CORRECT ANSWER " << endl;

}

void hard(){ // dificultade facil no jogo das tabuadas

    int num1,result , hits;
    bool number = false;


    srand(time(NULL));
    num1 = rand() % 10;

    for(int i = 0; i < 10; i++){
        cout << num1 << " * " << i << " = ";
        cin >> result;

        if(result == num1*i){
            hits++;
        }
    }

    cout << "YOU MAKE " << hits << " CORRECT ANSWER " << endl;
}

void MathGame(){ // main do MathGame

    bool option = false;
    char choice;


            cout << "################" << endl;
            cout << "# THE MATHGAME #" << endl;
            cout << "################" << endl;

            cout << "1. ADDITION" << endl;
            cout << "2. SUBTRACTION" << endl;
            cout << "3. MULTIPLICATION" << endl;
            cout << "q. QUIT" << endl;
            cout << "Option: ";
            cin >> choice;

            while(!option){
                switch (choice){
                    case '1':

                        addition();
                        option = true;
                        break;
            
                    case '2':

                        subtraction();
                        option = true;
                        break;
                    
                    case '3':

                        multiplication();
                        option = true;
                        break;
                    
                    case 'q':

                        option = true;
                        break;

                    default:

                        cout << "ERROR : THIS OPTION NO EXIST" << endl;
                        option = false;
                        break;
                }
            }

}

void Timestable(){ // main Times Table
    int result;
    int choose;
            
    cout << "##############################" << endl;
    cout << "# WELCOME TO THE TIMES TABLE #" << endl;
    cout << "##############################" << endl;
    cout << endl;
    cout << "Choose the dificult" << endl;
    cout << "1. EASY (0/1/2/3/10)" << endl;
    cout << "2. MEDIUM (0/1/2/3/4/5/6/10)" << endl;
    cout << "3. HARD (0/1/2/3/4/5/6/7/8/9/10)" << endl;
    cout << "Choose: ";
    cin >> choose;
    cout << endl;

    switch (choose){
        case '1':
            easy();
            break;

        case '2':
            medium();
            break;

        case '3':
            hard();
            break;
            
        default:
            cout << "ERROR : THIS OPTION NO EXIST" << endl;
            break;
    }
}

int main(){

    char choice;
    bool option = false;

    cout << "#######################################"<< endl;
    cout << "# WELCOME TO THIS GAME AND CALCULATOR #" << endl;
    cout << "#######################################"<< endl;
    cout << endl;

    cout << "Choose one of this: " << endl;
    cout << "1. MATH GAME" << endl;
    cout << "2. TIMES TABLE" << endl;
    cout << "q. QUIT" << endl;
    cout << "Choice: ";
    cin >> choice;

    while(!option){
        switch (choice){
            case '1':
            
                MathGame();
                option = false;
                break;
            
            case '2':

                Timestable();
                option = false;
                break;
            
            case 'q':

                option = true;
                break;

            default:

                cout << "ERROR : THIS OPTION NO EXIST" << endl;
                option = false;
                break;
        }
    }

    return 0;
}