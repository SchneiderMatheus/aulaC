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
    
    int escolha, n1,n2;
    double resultado;
    cout<<"1 - SOMA" <<endl;
    cout<<"2 - SUBTRAÇÃO" <<endl;
    cout<<"3 - MULTIPLICACAO" <<endl;
    cout<<"4 - DIVSÃO" <<endl;
    cout<<"5 - Sair" <<endl;
    
    cout << "Escolha um número de entre 1 e 5." <<endl;
    cin >> escolha;
    while(escolha >1 && escolha >5) {
        cout << "escolhe um numero valido seu bobão"<<endl;
        cin >> escolha;
    } 
    
    switch (escolha) {
        case 1: 
        cout << "informe dois numeros inteiros: " << endl;
        cin >> n1 >>n2;
        resultado = n1 + n2;
        break;
        case 2: 
        cout << "informe dois numeros inteiros: " << endl;
        cin >> n1 >>n2;
        resultado = n1 - n2;
        break;
        case 3: 
        cout << "informe dois numeros inteiros: " << endl;
        cin >> n1 >>n2;
        resultado = n1*n2;
        break;
        case 4: 
        cout << "informe dois numeros inteiros: " << endl;
        cin >> n1 >>n2;
        if (n2 ==0){
            cout << "Nao existe divisão por zero amigou"<< endl;
        } else
        resultado = n1 / n2;
        break;
        case 5: 
        cout << "SAINDO... " << endl;
        exit(0);
        break;
    }
    
    cout << "Resultado do sua operação é: " <<resultado <<endl;

    return 0;
}