/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <cmath>

int main()
{   
    int n;
    cout<<"De um tamanho para a matriz quadrada: ";
    cin >> n;
    int matriz [n][n]; 
    
    for (int i =0; i<n; i++){
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
           
    
    

    return 0;
}