#pragma once
#include <iostream>
#include <vector>
#include "Aluno.hpp"
#include "Disciplina.hpp"
#include "Professor.hpp"
using namespace std;
class System{
    private:
        string nome;
        string endereco;
        vector<Professor> professores;
        vector<Aluno> alunos;   
        vector<Disciplina> disciplinas;

    public:
        void cadastrarDisciplina(Disciplina disciplina);        
        void cadastrarAluno(Aluno aluno);
        void cadastrarProfessor(Professor professor);

        void imprimirProfessores();
        void imprimirDisciplinas();
        void imprimirAlunos();

        System();
        System(string nome,string endereco);
};