#include <string>
#include "Aluno.hpp"
//Getters
int Aluno::getMatricula(){
    return matricula;
}
//Setters
void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}
//Construtor
Aluno::Aluno(int matricula,string nome,string endereco):Pessoa(nome,endereco){
    this->matricula = matricula;

}