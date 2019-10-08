#include "Pessoa.hpp"
#include <string>
#ifndef __PROFESSOR_HPP
#define __PROFESSOR_HPP
class Professor : public Pessoa
{
private:
    string titulacao;
    string curso;
public:
    //Getters
    string getTitulacao();
    string getCurso();
    //Setters
    void setTitulacao(string titulacao);
    void setCurso(string curso);
    //Construtor
    Professor();
    Professor(string titulacao,string curso,string nome,string endereco);
};
#endif