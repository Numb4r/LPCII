#include "Pessoa.hpp"
#include <string>
using namespace std;


//Pessoa::getters
string Pessoa::getNome(){
    return nome;
}
string Pessoa::getEndereco(){
    return endereco;
}
//Pessoa::setters
void Pessoa::setNome(string nome){
    this->nome = nome;
}
void Pessoa::setEndereco(string endereco){
    this->endereco;
}

//Construtores
Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome,string endereco){
    this->nome = nome;
    this->endereco = endereco;
}