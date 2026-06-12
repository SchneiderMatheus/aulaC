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
    
    int reveladas [3][3] ={ {'0','0','0'},
                         {'0','0','0'},
                         {'0','0','0'}};
    
    int seAcabou [3][3] ={ {'1','1','1'},
                         {'1','1','1'},
                         {'1','1','1'}};
    
    bool jogoEmpatou =  false;
    
    if (reveladas == seAcabou) {
        jogoEmpatou == true;
    }
    if (jogoEmpatou){
        cout << "Empate Total" << endl;
        for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
        }
        exit(EXIT_SUCCESS);
    }
    
    
    
    for (int i =0; i<3; i++){
        cout << "\n";
            for (int j=0; j<3; j++){
                cout << "|" << matriz [i][j]<< "|";
            }
        }
           
    
    
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