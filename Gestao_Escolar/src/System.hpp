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
        vector<Aluno> getVectorAlunos();
        vector<Professor> getVectorProfessores();
        vector<Disciplina> getVectorDisciplina();
        Aluno getAlunoByIdReference(int id);
        Professor getProfessorByIdReference(int id);
        void imprimirProfessores(bool indices =  false);
        void imprimirDisciplinas(bool indices = false);
        void imprimirAlunos(bool indices = false);
        void removerAluno(int id);
        void removerProfessor(int id);
        void removerDisciplina(int id);

        System();
        System(string nome,string endereco);
};