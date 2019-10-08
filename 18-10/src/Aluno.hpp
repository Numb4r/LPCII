#include "Pessoa.hpp"
#ifndef __ALUNO_HPP
#define __ALUNO_HPP
class Aluno : public Pessoa
{
private:
    int matricula;
public:
    //Getters
    int getMatricula();
    //Setters
    void setMatricula(int matricula);
    //Construtor
    Aluno(int matricula,string nome,string endereco);
};
#endif