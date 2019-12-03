#ifndef __ALUNO_HPP
#define __ALUNO_HPP
#include <iostream>
#include "Pessoa.hpp"

using namespace std;

class Aluno : public Pessoa
{
private:
    string matricula;
    int serie;

public:
    //Construtores
    Aluno();
    Aluno(string matricula, int serie, string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo);

    //Getters
    string getMatricula();
    int getSerie();

    //Setters
    void setMatricula(string matricula);
    void setSerie(int serie);
    
    void imprimir();
};
#endif