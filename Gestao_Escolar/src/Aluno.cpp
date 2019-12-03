#include <iostream>
#include "Pessoa.hpp"
#include "Aluno.hpp"

using namespace std;

//Construtores
Aluno::Aluno(string matricula, int serie, string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo)
    : Pessoa(nome, endereco, telefone, email, dataNascimento, cpf, sexo)
{
    this->matricula = matricula;
    this->serie = serie;
}

//Getters
string Aluno::getMatricula()
{
    return matricula;
}
int Aluno::getSerie()
{
    return serie;
}

//Setters
void Aluno::setMatricula(string matricula)
{
    this->matricula = matricula;
}
void Aluno::setSerie(int serie)
{
    this->serie = serie;
}

void Aluno::imprimir()
{
    Pessoa::imprimir();
    cout << "Matrícula: " << matricula << endl;
    cout << "Série: " << serie << endl;
}
