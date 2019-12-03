#include <iostream>
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "Aluno.hpp"
#include "Disciplina.hpp"

using namespace std;

//Construtores

Disciplina::Disciplina(){}
Disciplina::Disciplina(string nomeDisciplina,int codigoDisciplina) 
{
    this->nomeDisciplina = nomeDisciplina;
    this->codigoDisciplina = codigoDisciplina;
}

//Getters
string Disciplina::getnomeDisciplina()
{
    return nomeDisciplina;
}
int Disciplina::getcodigoDisciplina()
{
    return codigoDisciplina;
}
Professor Disciplina::getProfessor(){
    return professor;
}
vector<Aluno> Disciplina::getTodosAlunos(){
    return alunos;
}

//Setters
void Disciplina::setnomeDisciplina(string nomeDisciplina)
{
    this->nomeDisciplina = nomeDisciplina;
}
void Disciplina::setcodigoDisciplina(int codigoDisciplina)
{
    this->codigoDisciplina = codigoDisciplina;
}
void Disciplina::setProfessor(Professor professor){
    this->professor = professor;
}
void Disciplina::cadastrarAluno(Aluno aluno){
    this->alunos.push_back(aluno);
}


Aluno Disciplina::getAlunoMatricula(string matricula){
    for(auto& e:alunos){
        if(e.getMatricula() == matricula)   return e;
    }
    throw ExceptionOutOfRange();
}
void Disciplina::imprimir()
{    
    
    cout << "Nome da Disciplina: " << nomeDisciplina << endl;
    cout << "Código da Disciplina: " << codigoDisciplina << endl;
    cout << "Professor: "<<professor.getNome()<<endl;
    cout<<"Alunos: "<<endl;
    for(auto& e: alunos){
        cout<<e.getNome()<<endl;
    }
}
