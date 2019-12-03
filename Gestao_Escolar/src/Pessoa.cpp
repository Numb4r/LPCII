#include <iostream>
#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo)
{
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
    this->email = email;
    this->dataNascimento = dataNascimento;
    this->cpf = cpf;
    this->sexo = sexo;
}

//Getters
string Pessoa::getNome()
{
    return nome;
}
string Pessoa::getEndereco()
{
    return endereco;
}
string Pessoa::getTelefone()
{
    return telefone;
}
string Pessoa::getEmail()
{
    return email;
}
string Pessoa::getDataNascimento()
{
    return dataNascimento;
}
int Pessoa::getCpf()
{
    return cpf;
}
char Pessoa::getSexo()
{
    return sexo;
}

//Setters
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}
void Pessoa::setEndereco(string endereco)
{
    this->endereco = endereco;
}
void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}
void Pessoa::setEmail(string email)
{
    if(email.find("@") != string::npos){
        this->email = email;
    }else{
        throw ExceptionInvalidEmail();
    }
}
void Pessoa::setDataNascimento(string dataNascimento)
{
    this->dataNascimento = dataNascimento;
}
void Pessoa::setCpf(int cpf)
{
    this->cpf = cpf;
}
void Pessoa::setSexo(char sexo)
{
    sexo == toupper(sexo);
    if(sexo == 'M' || sexo == 'F'){
        this->sexo = sexo;
    }else{
        throw ExceptionInvalidSex();
    }
}

void Pessoa::imprimir()
{
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    cout << "Telefone: " << telefone << endl;
    cout << "E-mail: " << email << endl;
    cout << "Data de Nascimento: " << dataNascimento << endl;
}
