#include <iostream>
#include <vector>
#include "Pais.hpp"

using namespace std;


int main(){
    Pais pais,x;
    string nome,capital,nomepaisfronteira;;
    vector <string> fronteiras;
    double dimensao;
    cout << "Entre com o nome,capital e dimensao do pais"<<endl;
    cin >> nome>>capital>>dimensao;
    cout << "Entre com os paises de fronteira.Pressione -99 para parar" <<endl;
    while (nomepaisfronteira != "-99")
    {
        cin>>nomepaisfronteira;
        if (nomepaisfronteira != "-99")
        {
            fronteiras.push_back(nomepaisfronteira);
        }
        
    }
    
    pais = Pais(nome,capital,fronteiras,dimensao);
    x = pais;
    pais.verificarSePaisEIgual(x);
    x.setNome("A");
    x.verificarSePaisEIgual(pais);
    pais.imprimirDados();

    //fronteiras.clear();
    
    return 0;
}