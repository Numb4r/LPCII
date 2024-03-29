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
Aluno System::getAlunoByIdReference(int id){
    return  alunos.at(id);
}
Professor System::getProfessorByIdReference(int id){
    return professores.at(id);
}
void System::removerAluno(int id){
    Aluno aluno = alunos.at(id);
    alunos.erase(alunos.begin()+id);
    for(auto &&var : disciplinas)
    {
        for (size_t i = 0; i < var.getTodosAlunos().size(); i++)
        {
            if(var.getTodosAlunos().at(i).getCpf() == aluno.getCpf()){
                var.removerAluno(i);
            }
        }   
    }
    
}
bool System::conferirMatricula(string matricula){
    for(auto var: alunos){
        if (var.getMatricula()==matricula)return false;
    }
    return true;
}
void System::removerProfessor(int id){
    Professor professor = professores.at(id);
    professores.erase(professores.begin()+id);
    for (size_t i = 0; i < disciplinas.size(); i++)
    {
        if (disciplinas.at(i).getProfessor().getCpf() == professor.getCpf())
        {
            disciplinas.erase(disciplinas.begin()+i);
        }
        
    }
    
}
void System::removerDisciplina(int id){
    disciplinas.erase(disciplinas.begin()+id);
}
void System::imprimirProfessores(bool indices){
    cout<<"Professores: "<<endl;
    for (size_t i = 0; i < professores.size(); i++)
    {
        if(indices){
             cout<<i<<" "<<professores.at(i).getNome()<<"\n"<<endl;;
        }else{
            professores.at(i).imprimir();
            cout<<"=====================================================\n\n";
        }
    }
    
}
void System::imprimirDisciplinas(bool indices){
    cout<<"Disciplinas: " <<endl;
    for (size_t i = 0; i < disciplinas.size(); i++)
    {
        if (indices)
        {
            cout <<i<<" "<<disciplinas.at(i).getnomeDisciplina()<<"\n"<<endl;
        }else{
            disciplinas.at(i).imprimir();
            cout<<"=====================================================\n\n";
        }
        
    }
    
}
void System::imprimirAlunos(bool indices){
    cout<<"Alunos: "<<endl;
    for (size_t i = 0; i < alunos.size(); i++)
    {
        if(indices){
            cout<< i << " "<<alunos.at(i).getNome()<<"\n"<<endl;
        }else{
            alunos.at(i).imprimir();
            cout<<"=====================================================\n\n";
        }
    }
    
}
System::System(){

}
System::System(string nome,string endereco){
    this->nome = nome;
    this->endereco = endereco;
}