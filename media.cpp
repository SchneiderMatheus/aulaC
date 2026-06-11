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
    
    int numero=1, soma=0;
    int contador=0;
    double media;
    
    while (numero != 0){
    cout<<"Digite numeros até para a media ser calculada, o 0 termina o programa"<<endl;
    cin >> numero;
    if (numero != 0){
    soma += numero;
    contador ++;
        }
    
    } 
    
    media = soma / contador;
    cout << "Foram " << contador << " tentativas" << ", média: " << media <<endl;

    return 0;
}