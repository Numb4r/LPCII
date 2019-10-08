#include "Professor.hpp"

//Getters
std::string Professor::getTitulacao(){
    return titulacao;
}
std::string Professor::getCurso(){
    return curso;
}
//Setters
void Professor::setTitulacao(std::string titulacao){
    this ->titulacao =titulacao ;
}
void Professor::setCurso(std::string curso){
    this ->curso = curso ;
}
//Construtor
Professor::Professor(){}
Professor::Professor(string titulacao,string curso,string nome,string endereco) : Pessoa(nome,endereco){
    this->titulacao = titulacao;
    this->curso = curso;
}