#include "Aluno.hpp"
#include <string>
#include <vector>
using namespace std;
#ifndef __CURSO_HPP
#define __CURSO_HPP
class Curso{
    private:
        string nome;
        vector<string> listaDisciplinas;
        int duracaoMedia;
        vector<Aluno> listaAluno;
        int qntAluno;
    public:
        //Setters
        void setNome(string nome);
        void addDisciplina(string disciplina);
        void popDisciplina(int id);
        void setDuracaoMedia(int duracao);
        void addAluno(Aluno aluno);
        void popAluno(int id);
        //Getters
        string getNome();
        int getDuracaoMedia();
        int getQntAlunos();
        void mostrarDisciplinas();
        void mostrarAlunos();
        //Construtor
        Curso(string nome,int duracaoMedia,vector<string> listaDisciplinas);   
        Curso(string nome,int duracaoMedia);   
};
#endif