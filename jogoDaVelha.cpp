/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
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

    
    
    bool venceu = false;
    int linha, coluna;
    int jogadas =0;
    char jogadorAtual= 'X';
    
    cout << "---> JOGO DA VELHA <---" << endl;
    
    while (!venceu && jogadas<9){
    cout << "\nSelecione a sua jogada: (linha e coluna) "<< endl;
    cin >> linha >> coluna;
    if(matriz[linha - 1][coluna - 1] != ' ') {
        cout<< "Essa casa ja foi jogada, escolha outra!" << endl;
        continue;
    }
    cout << "Coordenadas: " <<linha <<"x" << coluna << endl;
    
    matriz[linha-1][coluna-1] = jogadorAtual;
    reveladas[linha-1][coluna-1] = 1;
    jogadas++;
    
      for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
    } cout<< endl;
    
        for (int i = 0; i<3; i++){ // linhas
            if (matriz[i][0] == jogadorAtual && 
                matriz[i][1] == jogadorAtual && 
                matriz[i][2] == jogadorAtual){
                venceu = true;
                
                
            }
        }
        
        for (int j = 0; j<3; j++){ // colunas
            if (matriz[0][j] == jogadorAtual && 
                matriz[1][j] == jogadorAtual && 
                matriz[2][j] == jogadorAtual){
                venceu = true;
                
                
            }
        }
        
        if (matriz[0][0]==jogadorAtual && matriz[1][1]== jogadorAtual && matriz [2][2]==jogadorAtual){
            venceu = true;
            
            
        }
        if (matriz[2][0]==jogadorAtual && matriz[1][1]== jogadorAtual && matriz [0][2]==jogadorAtual){
            venceu = true;
            
            
        }
        
        if(!venceu) {
            if (jogadorAtual == 'X'){
                jogadorAtual = 'O';
            } else
            jogadorAtual = 'X';
        }
        
    }
    
        cout << "\nAcabou o jogo" << endl;
        for (int i =0; i<3; i++){
            cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
        }
        cout << "\nJogador " <<jogadorAtual<<" foi o GRANDE VENCEDOR!" <<endl;
        exit(EXIT_SUCCESS);
        return 0;
    }
    
    