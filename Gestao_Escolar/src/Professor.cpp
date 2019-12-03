#include <iostream>
#include "Pessoa.hpp"
#include "Professor.hpp"

using namespace std;

//Construtores
Professor::Professor(){}
Professor::Professor(string formacao, string admissao, string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo)
    : Pessoa(nome, endereco, telefone, email, dataNascimento, cpf, sexo)
{
    this->formacao = formacao;
    this->admissao = admissao;
}

//Getters
string Professor::getFormacao()
{
    return formacao;
}
string Professor::getAdmissao()
{
    return admissao;
}

//Setters
void Professor::setFormacao(string formacao)
{
    this->formacao = formacao;
}
void Professor::setAdmissao(string admissao)
{
    this->admissao = admissao;
}

void Professor::imprimir()
{
    Pessoa::imprimir();
    cout << "Formação: " << formacao << endl;
    cout << "Admissão: " << admissao << endl;
}