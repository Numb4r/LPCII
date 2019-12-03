#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include "ExceptionInvalidSex.hpp"
#include "ExceptionInvalidEmail.hpp"
#include <iostream>

using namespace std;

class Pessoa
{
private:
    string nome;
    string endereco;
    string telefone;
    string email;
    string dataNascimento;
    int cpf;
    char sexo;

public:
    //Construtores

    Pessoa();
    Pessoa(string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo);

    //Getters
    string getNome();
    string getEndereco();
    string getTelefone();
    string getEmail();
    string getDataNascimento();
    int getCpf();
    char getSexo();

    //Setters
    void setNome(string nome);
    void setEndereco(string endereco);
    void setTelefone(string telefone);
    void setEmail(string email);
    void setDataNascimento(string dataNascimento);
    void setCpf(int cpf);
    void setSexo(char sexo);

    void imprimir();
};
#endif
