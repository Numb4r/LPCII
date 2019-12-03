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
vector<Aluno> System::getVectorAlunos(){
    return alunos;
}
vector<Professor> System::getVectorProfessores(){
    return professores;
}
vector<Disciplina> System::getVectorDisciplina(){
    return disciplinas;
}
Aluno* System::getAlunoByIdReference(int id){
    return  &alunos.at(id);
}
Professor* System::getProfessorByIdReference(int id){
    return &professores.at(id);
}
void System::imprimirProfessores(bool indices){
    cout<<"Professores: "<<endl;
    for (size_t i = 0; i < professores.size(); i++)
    {
        if(indices){
             cout<<i<<" "<<professores.at(i).getNome();
        }else{
            professores.at(i).imprimir();
        }
    }
    
}
void System::imprimirDisciplinas(bool indices){
    cout<<"Disciplinas: " <<endl;
    for (size_t i = 0; i < disciplinas.size(); i++)
    {
        if (indices)
        {
            cout <<i<<" "<<disciplinas.at(i).getnomeDisciplina();
        }else{
            disciplinas.at(i).imprimir();
        }
        
    }
    
}
void System::imprimirAlunos(bool indices){
    cout<<"Alunos: "<<endl;
    for (size_t i = 0; i < alunos.size(); i++)
    {
        if(indices){
            cout<< i << " "<<alunos.at(i).getNome();
        }else{
            alunos.at(i).imprimir();
        }
    }
    
}
System::System(){

}
System::System(string nome,string endereco){
    this->nome = nome;
    this->endereco = endereco;
}