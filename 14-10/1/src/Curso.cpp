#include "Curso.hpp"
//Curso::setters
void Curso::setNome(std::string nome){
    this->nome = nome;
}
void Curso::addDisciplina(std::string disciplina){
    this->listaDisciplinas.push_back(disciplina);
}
void Curso::popDisciplina(int id){
        this->listaDisciplinas.erase(listaDisciplinas.begin()+id);
}
void Curso::setDuracaoMedia(int duracao){
    this->duracaoMedia = duracao;
}
void Curso::addAluno(Aluno aluno){
    this->listaAluno.push_back(aluno);
    qntAluno = listaAluno.size();
}
void Curso::popAluno(int id){
    this->listaAluno.erase(listaAluno.begin()+id);
}
//Curso::getters
std::string Curso::getNome(){
    return nome;
}
int Curso::getDuracaoMedia(){
    return duracaoMedia;
}
int Curso::getQntAlunos(){
    return qntAluno;
}
void Curso::mostrarDisciplinas(){
    if (!listaDisciplinas.empty())
    {
        cout<<endl;
        for (long unsigned int i = 0; i < listaDisciplinas.size(); i++)
        {
            cout<<i<<". "<<listaDisciplinas.at(i)<<endl;
        }
    }
    
    
}
void Curso::mostrarAlunos(){
   if (!listaAluno.empty())
   {
        cout<<endl;
        for (long unsigned int i = 0; i < listaAluno.size(); i++)
        {
            cout<<i<<". "<<endl;
            listaAluno.at(i).imprimirAluno();
            cout<<"---------------------------------------------"<<endl;
        }
   }
}
//Construtor
Curso::Curso(std::string nome,int duracaoMedia,vector<std::string> listaDisciplinas){
    this->nome = nome;
    this->duracaoMedia = duracaoMedia;
    this->listaDisciplinas = listaDisciplinas;

}   
Curso::Curso(std::string nome,int duracaoMedia){
    this->nome = nome;
    this->duracaoMedia = duracaoMedia;
}   