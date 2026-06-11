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
    int tentativa,numero;
    srand(time(0));
    
    numero = rand() % 100 + 1;
    do{
    cout<<"chuta um numero ai paizao" << endl;
    cin >> tentativa;
        if (tentativa > numero){
            cout << "Mais baixo paizão" << endl;
        } if (tentativa < numero){
            cout << "Mais alto paizão" << endl;
        }
        
    } while ( tentativa != numero);
    cout << "ACertou mizeraviiii!" << endl;
    return 0;
}