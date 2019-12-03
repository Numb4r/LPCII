#ifndef __PROFESSOR_HPP
#define __PROFESSOR_HPP
#include <iostream>
#include "Professor.hpp"

using namespace std;

class Professor : public Pessoa
{
private:
    string formacao;
    string admissao;

public:
    //Construtores
    Professor();
    Professor(string formacao, string admissao, string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo);

    //Getters
    string getFormacao();
    string getAdmissao();

    //Setters
    void setFormacao(string formacao);
    void setAdmissao(string admissao);
    
    void imprimir();
};
#endif