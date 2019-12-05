#ifndef __DISCIPLINA_HPP
#define __DISCIPLINA_HPP
#include <iostream>
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "Aluno.hpp"
#include <vector>
#include "ExceptionOutOfRange.hpp"

using namespace std;

class Disciplina
{
private:
    string nomeDisciplina;
    int codigoDisciplina;
    Professor professor;
    vector<Aluno> alunos;
    
public:
    //Construtores
    Disciplina();
    Disciplina(string nomeDisciplina,int codigoDisciplina);

    //Getters
    string getnomeDisciplina();
    int getcodigoDisciplina();
    Professor getProfessor();
    vector<Aluno> getTodosAlunos();
    Aluno getAlunoMatricula(string matricula);
    //Setters
    void setnomeDisciplina(string disciplina);
    void setcodigoDisciplina(int codigoDisciplina);
    void setProfessor(Professor professor);
    void cadastrarAluno(Aluno aluno);
    void removerAluno(int id);

    void imprimir();
};
#endif