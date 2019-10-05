#include <string>
#include "Professor.hpp"
using namespace std;
#ifndef __DISCIPLINA_HPP
#define __DISCIPLINA_HPP
class Disciplina
{
private:
    string nome;
    int ch;
    Professor professor;

public:
    //Getters
    string getNome();
    int getCH();
    Professor getProfessor();
    //Setters
    void setNome(string nome);
    void setCH(int ch);
    void setProfessor(Professor professor);
    //Construtor
    Disciplina(string nome,int ch,Professor professor);
    Disciplina(string nome,int ch);
};
#endif