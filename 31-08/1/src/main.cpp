#include <iostream>
#include "Pessoa.hpp"
#include <string>

using namespace std;

int main()
{
    Pessoa z,p;
    float peso,altura;
    char sexo;
    string irmaos[3],nome;
    cout <<"Digite seu nome              : ";
    getline(cin,nome);
    cout << "Digite seu sexo              : ";
    cin >> sexo;
    cout << "Digite sua altura            : ";
    cin >> altura;
    cout << "Digite seu peso              : ";
    cin >> peso;
    cout << "Digite seu primeiro irmao    : ";
    cin >>irmaos[0];
    cout << "Digite seu segundo irmao     : ";
    cin >>irmaos[1];
    cout << "Digite seu terceiro  irmao   : ";
    cin >>irmaos[2];
    p.setNome(nome);
    p.setSexo(sexo);
    p.setAltura(altura);
    p.setPeso(peso);
    p.setIrmaos(irmaos);
    p.imprimirPessoa();
    p.imprimirIrmaos();


    return 0;
}
