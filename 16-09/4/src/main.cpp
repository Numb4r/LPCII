#include <iostream>
#include <vector>
#include "Pais.hpp"
#include <cctype>
#include "Continente.hpp"
using namespace std;

Pais inserirPais(){
    string nome;
    int populacao;
    double area;
    cout<<"\n\nEntre com o nome do pais : ";
    cin >> nome;
    cout << "Entre com a populacao do pais : ";
    cin>>populacao;
    cout <<"Entre com a area total do pais : ";
    cin>>area;
    Pais pais = Pais(nome,populacao,area);
    return pais;
}
Continente inserirContinente(){
    string nome;
    char op;
    vector<Pais> paises;
    cout<<"Entre com o nome do continente :";
    cin >> nome;
    cout<<"Insira os paises do continente : \n"<<endl;
    do
    {
        paises.push_back(inserirPais());
        cout<<"Deseja continuar inserindo paises ?([S]im : [N]ao) "<<endl;
        cin>>op;
    } while (toupper(op)!= 'N');
    Continente continente = Continente(nome,paises);
    return continente;
    
}
int main()
{
    Continente continente = inserirContinente();
    
    cout <<"\n\nNome do continente : "<< continente.getNome()<<endl;
    cout <<"Populacao do continente : "<< continente.getPopulacaoContinente()<<endl;
    cout << "Area do continente : "<<continente.getDimensaoContinente()<<endl;
    cout<<"Densidade populacional : "<<continente.getDensidadePopulacaoContinente()<<endl;
    cout<<"Razao territorial entre o maior e o menor pais : "<<continente.getRazaoTerritorialMaiorMenor()<<endl;
    cout << "-------- Maior --------"<<endl;
    cout << "Dimensao : "<<continente.getPaisMaiorDimensaoTerritorial().getNome()<<" - "<<continente.getPaisMaiorDimensaoTerritorial().getArea()<<endl;
    cout << "Populacao : "<<continente.getPaisMaiorPopulacao().getNome() << " - "<<continente.getPaisMaiorPopulacao().getPopulacao()<<endl;
    cout << "-------- Menor --------"<<endl;
    cout <<"Dimensao : "<<continente.getPaisMenorDimensaoTerritorial().getNome()<<" - "<<continente.getPaisMenorDimensaoTerritorial().getArea()<<endl;
    cout <<"Populacao : "<<continente.getPaisMenorPopulacao().getNome()<<" - "<<continente.getPaisMenorPopulacao().getPopulacao()<<endl;
    
    

    return 0;
}
