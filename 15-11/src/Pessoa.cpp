#include "Pessoa.hpp"


std::string Pessoa::getNome(){
    return nome;
}
char Pessoa::getSexo(){
    return sexo;
}
int Pessoa::getCPF(){
    return cpf;
}
std::string Pessoa::getTelefone(){
    return telefone;
}
std::string Pessoa::getIdentidade(){
    return identidade;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}
void Pessoa::setSexo(char sexo){
    this->sexo = sexo;
}
void Pessoa::setCPF(int cpf){
    this->cpf = cpf;
}
void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}
void Pessoa::setIdentidade(std::string identidade){
    this->identidade = identidade;
}

void Pessoa::imprimir(){
    cout<<"Nome: "<< nome<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"CPF: "<<cpf<<endl;
    cout<<"Telefone: "<<telefone<<endl;
    cout<<"Identidade: " <<telefone<<endl;
}


Pessoa::Pessoa(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade){
    this->nome = nome;
    this->sexo = sexo;
    this->cpf = cpf;
    this->endereco = endereco;
    this->telefone = telefone;
    this->identidade = identidade;
}