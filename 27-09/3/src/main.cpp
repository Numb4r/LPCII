#include <iostream>
#include <vector>
#include "Pais.hpp"
#include <string>
using namespace std;


int main(){
    Pais pais,x;
    string nome,capital,nomepaisfronteira;
    vector <string> fronteiras;
    double dimensao;
    float populacao;
    cout << "Entre com o nome,capital,populacao e dimensao do pais"<<endl;
    cin >> nome>>capital>>populacao>>dimensao;
    cout << "Entre com 5 paises de fronteira." <<endl;
    for (size_t i = 0; i < 5; i++)
    {
        getline(cin,nomepaisfronteira);
        fronteiras.push_back(nomepaisfronteira);
    }
    pais = Pais(nome,capital,fronteiras,populacao,dimensao);
    x = pais;
    pais.verificarSePaisEIgual(x);
    x.setNome("A");
    x.verificarSePaisEIgual(pais);
    pais.imprimirDados();
    x.setPopulacao(pais.getPopulacao()*2);
    cout << pais.crecimentoPopulacional(pais,x);    
    return 0;
}