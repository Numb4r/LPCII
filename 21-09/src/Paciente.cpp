#include"Paciente.hpp"
#include <iostream>
using namespace std;
//Paciente::setters
void Paciente::setNome(std::string nome){
    this->nome = nome;
}
void Paciente::setSexo(char sexo){
    this->sexo = sexo;
}
void Paciente::setCPF(std::string cpf){
    this->cpf = cpf;
}
void Paciente::setEndereco(std::string endereco){
    this->endereco = endereco;
}
void Paciente::setPeso(float peso){
    this->peso = peso;
}
//Paciente::getters
std::string Paciente::getNome(){
    return nome;
}
char Paciente::getSexo(){
    return sexo;
}
std::string Paciente::getCPF(){
    return cpf;
}
std::string Paciente::getEndereco(){
    return endereco;
}
float Paciente::getPeso(){
    return peso;
}
void Paciente::imprimir(){
    cout<<"--------------------------------"<<endl;
    cout<<"Nome: "<<this->nome<<endl;
    cout<<"Sexo: "<<this->sexo<<endl;
    cout<<"Peso :"<<this->peso<<endl;
    cout<<"CPF: "<<this->cpf<<endl;
    cout<<"Endereco: "<<this->endereco<<endl;
    cout<<"--------------------------------"<<endl;
}
//Construtor
Paciente::Paciente(){}
Paciente::Paciente(std::string nome,char sexo,std::string cpf,std::string endereco,float peso){
    this->nome = nome;
    this->cpf = cpf;
    this->sexo = sexo;
    this->endereco = endereco;
    this->peso = peso;
}
