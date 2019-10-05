#include "Aluno.hpp"
#include "Disciplina.hpp"
#include "Professor.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#ifndef __CURSO_HPP
#define __CURSO_HPP
class Curso
{
private:
    string nome;
    vector<Professor> professores;
    vector<Aluno> alunos;
    vector<Disciplina> disciplinas;
public:
    void setNome(string nome);
    string getNome();
    void cadastrarProfessor();
    void cadastrarAluno();
    void cadastrarDisciplina();
    void imprimirListaDeProfessores();
    void imprimirListaDeAlunos();
    void imprimirListaDeDisciplinas();
};
#endif