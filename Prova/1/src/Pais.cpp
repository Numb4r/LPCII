#include "Pais.hpp"
#include <iostream>
#include <vector>

using namespace std;


//Pais::getters
string Pais::getNome(){
    return nome;
}
string Pais::getCapital(){
    return capital;
}
double Pais::getDimensao(){
    return dimensao;
}
void Pais::verificarFronteiras(){
    cout<<"Paises de fronteiras:"<<endl;
    for (long unsigned int i = 0; i < paisesFronteira.size(); i++)
    {
        cout << paisesFronteira[i] << endl;
    } 
}
//Pais::setters
void Pais::setNome(string nome){
    this->nome = nome;
}
void Pais::setCapital(string capital){
    this-> capital = capital;
}
void Pais::setDimensao(double dimensao){
    this->dimensao = dimensao;
}
void Pais::setFronteira(vector<string> fronteira){
    for (long unsigned int i = 0; i < fronteira.size(); i++)
    {
        if(fronteira[i] != nome)
            paisesFronteira.push_back(fronteira[i]);
    }
}

void Pais::verificarSePaisEIgual(Pais x){
    if (nome == x.getNome() && capital == x.getCapital() )
    {
        cout << "Os paises sao iguais"<<endl;
    }else{
        cout << "Os paises sao diferentes"<<endl;
    }
    
}
//Contrutor
Pais::Pais(){}
Pais::Pais(string nome,string capital,vector<string> paisFronteira,double dimensao){
    this->nome = nome;
    this->capital = capital;
    this->setFronteira(paisFronteira);
    this->dimensao = dimensao;
}