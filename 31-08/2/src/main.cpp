#include "Calculadora.hpp"
#include <iostream>

using namespace std;

int main()
{
    double primeiroNumero,segundoNumero;
    char operador;
    
    cout << "Insira o primeiro numero a se calcurado : ";
    cin>>primeiroNumero;
    cout << "Insira o segundo numero  a se calcurado : " ;
    cin >> segundoNumero;
    cout << "Insira o operador : ";
    cin >> operador;
    Calculadora calculadora = Calculadora(primeiroNumero,segundoNumero,operador);
    calculadora.imprimirResultado();
    return 0;
}
