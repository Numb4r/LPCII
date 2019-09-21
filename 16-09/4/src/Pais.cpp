#include "Pais.hpp"
#include <iostream>

//Getters 
string Pais::getNome(){
    return nome;
}
int Pais::getPopulacao(){
    return populacao;
}
double Pais::getArea(){
    return area;
}
//Setters
void Pais::setNome(string nome){
    this->nome = nome;
}
void Pais::setPopulacao(unsigned int populacao){
    this->populacao = populacao;
}
void Pais::setArea(double area){
    this->area = area < 0 ? -1*area : area;
}
//Construtor
Pais::Pais(){}
Pais::Pais(string nome,unsigned int populacao,double area){
    this->nome = nome;
    this->populacao = populacao;
    this->setArea(area);
}