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
    
    double peso, altura;
    
    cout << "Digite seu peso" << endl;
    cin >> peso;
    
    cout << "digite sua altura" << endl;
    cin >> altura;
    
    double imc = peso / (pow(altura,2));
    
    if (imc<16){
        cout << "PALITO DE DENTE";
    } else if (imc>16 && imc< 18.5) {
        cout << "Ta magrão";
    } else if (imc > 18.5 && imc <25) {
        cout << "TA UM BAITNHA";
    } else if (imc > 25 && imc < 30 ){
        cout << "TA GRANDINHO";
    } else {
        cout << "QUANDO TERMINAR DE COMER, BORA COMER?";
    }
    
    
    return 0;
}