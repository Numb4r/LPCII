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
float Pais::getPopulacao(){
    return populacao;
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
void Pais::setPopulacao(float populacao){
    this->populacao = populacao;
}
void Pais::setFronteira(vector<string> fronteira){
    for (long unsigned int i = 0; i < 5; i++)
    {
        if(fronteira[i] != nome)
            paisesFronteira.push_back(fronteira[i]);
    }
}

bool Pais::verificarSePaisEIgual(Pais x){
    return (nome == x.getNome() && capital == x.getCapital());
}
void Pais::imprimirDados(){
    cout<<"---------------------------"<<endl;
    cout <<"Nome :"<< this->nome<<endl;
    cout <<"Capital :"<< this->capital<<endl;
    this->verificarFronteiras();
}
int Pais::crecimentoPopulacional(Pais x,Pais y){
    float maior  = x.getPopulacao() > y.getPopulacao() ? x.getPopulacao() : y.getPopulacao();
    float menor  = x.getPopulacao() < y.getPopulacao() ? x.getPopulacao() : y.getPopulacao();
    int aux = 0;
    while (menor < maior)
    {
        aux++;
        menor*=103;
        maior*=102;
    }
    return aux;
}


//Contrutor
Pais::Pais(){}
Pais::Pais(string nome,string capital,vector<string> paisFronteira,float populacao,double dimensao){
    this->nome = nome;
    this->capital = capital;
    this->populacao = populacao;
    this->setFronteira(paisFronteira);
    this->dimensao = dimensao;
}