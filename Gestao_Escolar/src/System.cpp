#include "System.hpp"

void System::cadastrarDisciplina(Disciplina disciplina){
    this->disciplinas.push_back(disciplina);
}
void System::cadastrarAluno(Aluno aluno){
    this->alunos.push_back(aluno);
}   
void System::cadastrarProfessor(Professor professor){
    this->professores.push_back(professor);
}
void System::imprimirProfessores(){
    cout<<"Professores: "<<endl;
    for(auto& e:professores){
        e.imprimir();
    }
}
void System::imprimirDisciplinas(){
    cout<<"Disciplinas: " <<endl;
    for(auto& e:professores){
        e.imprimir();
    }
}
void System::imprimirAlunos(){
    cout<<"Alunos: "<<endl;
    for(auto& e:alunos){
        e.imprimir();
    }
}
System::System(){

}
System::System(string nome,string endereco){
    this->nome = nome;
    this->endereco = endereco;
}