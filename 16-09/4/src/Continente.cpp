#include <iostream>
#include <vector>
#include "Continente.hpp"
#include "Pais.hpp"

//Getters
std::string Continente::getNome(){
    return nome;
}
vector<Pais> Continente::getPaises(){
    return paises;
}
Pais Continente::getPaisById(int i){
    return paises[i];
}
//Setters
void Continente::setNome(std::string nome){
    this->nome = nome;
}
void Continente::setPaises(vector<Pais> paises){
    this->paises = paises;
}
//Construtor
Continente::Continente(std::string nome){
    this->nome = nome;
}
Continente::Continente(std::string nome,vector<Pais> paises){
    this->nome = nome;
    this->setPaises(paises);
}
double Continente::getDimensaoContinente(){
    double dimensao = 0;
    for (long unsigned int i = 0; i < paises.size(); i++)
        dimensao+= this->paises[i].getArea();
    return dimensao;
}
int Continente::getPopulacaoContinente(){
    int populacao = 0;
    for (long unsigned int i = 0; i < paises.size(); i++)
     populacao += this->paises[i].getPopulacao();
    return populacao;
}
double Continente::getDensidadePopulacaoContinente(){
    return this->getPopulacaoContinente()/this->getDimensaoContinente();
}
Pais Continente::getPaisMaiorPopulacao(){
    Pais paisMaior = this->paises[0];
    for (long unsigned int i = 1; i < paises.size(); i++)
        if(paisMaior.getPopulacao() < this->paises[i].getPopulacao())
            paisMaior = paises[i];
    return paisMaior;
}
Pais Continente::getPaisMenorPopulacao(){
    Pais paisMenor = this->paises[0];
    for (long unsigned int i = 1; i < paises.size(); i++)
        if(paisMenor.getPopulacao() > this->paises[i].getPopulacao())
            paisMenor = paises[i];
    return paisMenor;
}
Pais Continente::getPaisMaiorDimensaoTerritorial(){
    Pais paisMaior = this->paises[0];
    for (long unsigned int i = 1; i < paises.size(); i++)
        if(paisMaior.getArea() < this->paises[i].getArea())
            paisMaior = paises[i];
    return paisMaior;
}
Pais Continente::getPaisMenorDimensaoTerritorial(){
    Pais paisMenor = this->paises[0];
    for (size_t i = 0; i < paises.size(); i++)
        if(paisMenor.getArea() > this->paises[i].getArea())
            paisMenor = paises[i];
    return paisMenor;
}
double Continente::getRazaoTerritorialMaiorMenor(){
    Pais *pais = new Pais[2];
    pais[0] = this->getPaisMaiorDimensaoTerritorial();
    pais[1] = this->getPaisMenorDimensaoTerritorial();
    return pais[0].getPopulacao()/pais[1].getPopulacao();
}