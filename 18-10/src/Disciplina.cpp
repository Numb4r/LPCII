#include "Disciplina.hpp"
#include "Professor.hpp"
#include <string>

//Disciplina::getters
std::string Disciplina::getNome(){
    return nome;
}
int Disciplina::getCH(){
    return ch;
}
Professor Disciplina::getProfessor(){
    return professor;
}
//Disciplina::setters
void Disciplina::setNome(std::string nome){
    this-> nome = nome;
}
void Disciplina::setCH(int ch){
    this->ch = ch;
}
void Disciplina::setProfessor(Professor professor){
    this->professor = professor;
}
//Construtor
Disciplina::Disciplina(string nome,int ch,Professor professor){
    this->nome = nome;
    this->ch = ch;
    this->professor = professor;
}
Disciplina::Disciplina(string nome,int ch){
    this->nome = nome;
    this->ch = ch;
}