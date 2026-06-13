/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>

int main()
{   
    int vez = 0;
    
    
    char matriz [3][3] ={ {' ',' ',' '},
                         {' ',' ',' '},
                         {' ',' ',' '}};
    
    int reveladas [3][3] ={ {0,0,0},
                         {0,0,0},
                         {0,0,0}};

    
    bool jogoEncerrou =  true;
    int linha, coluna;
    char escolha;
    
    cout << "---> JOGO DA VELHA <---" << endl;
    
    for (int i =0; i<9; i++){
    cout << "\nSelecione a sua jogada: (linha e coluna) "<< endl;
    cin >> linha >> coluna;
    cout << "Coordenadas: " <<linha <<"x" << coluna << endl;
    cout << "Escolha X ou O: ";
    cin >> escolha;
    escolha = toupper(escolha);
    matriz[linha - 1][coluna - 1] = escolha;
    reveladas[linha - 1][coluna - 1] = 1;
    
      for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
    }
    
    if (matriz[0][0] == 'X' && matriz[0][1]== 'X' && matriz[0][2] == 'X'){
        cout << "\n\nJogador X é o vencedor\n";
        break;
    }
    
    for (int i =0; i<3; i++){
        for (int j =0; j <3; j ++){
            if(reveladas[i][j] == 0) {
                jogoEncerrou == false;
            }
        }
    }
    
    }
        
    
        cout << "\nAcabou o jogo" << endl;
        for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
        }
        exit(EXIT_SUCCESS);
    
    
    
    
    
    
    /*for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
    }*/
           
    
    
    /*for (int i =0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i==j){
                    matriz[i][j] =1;
                } else  
                    matriz[i][j] = 0;
            }
        }
    
    for (int i =0; i<n; i++){
        cout << "\n";
            for (int j=0; j<n; j++){
                cout << " " << matriz [i][j];
            }
        }
        
        
        
           */
    

    return 0;
}