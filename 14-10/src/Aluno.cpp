#include "Aluno.hpp"
int Aluno::totalAluno; 
 //Aluno::setters
void Aluno::setNome(std::string nome){
    this->nome = nome;
}
void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}
void Aluno::setDataNascimento(int dia,int mes,int ano){
    this->nascimento = Data(dia,mes,ano);
}

void Aluno::setEndereco(std::string endereco){
    this->endereco = endereco;
}
//Aluno::getters
std::string Aluno::getNome(){
    return nome;
}
int Aluno::getMatricula(){
    return matricula;
}
std::string Aluno::getDataNascimento(){
    return nascimento.toString();
}
std::string Aluno::getEndereco(){
    return endereco;
}

void Aluno::imprimirAluno(){
    cout<<"Nome: "<<nome<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Endereco: "<<endereco<<endl;
    cout<<"Data de nascimento: "<<nascimento.toString()<<endl;
}
Aluno::Aluno(std::string nome,std::string endereco,int diaNascimento,int mesNascimento,int anoNascimento){
    this->nome = nome;
    this->endereco = endereco;
    this->nascimento = Data(diaNascimento,mesNascimento,anoNascimento);
    this->matricula = totalAluno;
    this->totalAluno++;
}