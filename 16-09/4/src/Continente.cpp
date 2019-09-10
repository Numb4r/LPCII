#include <iostream>
#include "Continente.hpp"
#include "Pais.hpp"

//Getters
std::string Continente::getNome(){
    //TODO:Corrigir ambiguidade na declaracao do tipo string
    return nome;
}
Pais Continente::getPaises(){
    //TODO:Verificar retorno de um vetor
}
//Setters
void Continente::setNome(std::string nome){
    this->nome = nome;
}
void Continente::setPaises(Pais *paises){
    //TODO:Melhorar o jeito de insercao do vetor paises
    for (size_t i = 0; i < sizeof(paises)/sizeof(Pais); i++)
    {
        this->paises[i] = paises[i];
        
    }
    
}
//Construtor
Continente::Continente(std::string nome){
    this->nome = nome;
}
Continente::Continente(std::string nome,Pais *paises){
    this->nome = nome;
    this->setPaises(paises);
}

double Continente::getDimensaoContinente(){
    double dimensao = 0;
    //dimensao+= this->paises[i].getArea();
    return dimensao;
}
int Continente::getPopulacaoContinente(){}
double Continente::getDensidadePopulacaoContinente(){}
Pais Continente::getPaisMaiorPopulacao(){
    Pais paisMaior = this->paises[0];
    /*if(paisMaior.getPopulacao() < this->paises[i].getPopulacao()){
        paisMaior = paises[i];
    }*/
    return paisMaior;
}
Pais Continente::getPaisMenorPopulacao(){
    Pais paisMenor = this->paises[0];
    /*if(paisMenor.getPopulacao() < this->paises[i].getPopulacao()){
        paisMenor = paises[i];
    }*/
    return paisMenor;
}
Pais Continente::getPaisMaiorDimensaoTerritorial(){
    Pais paisMaior = this->paises[0];
    /*if(paisMaior.getArea() < this->paises[i].getArea()){
        paisMaior = paises[i];
    }*/
    return paisMaior;
}
Pais Continente::getPaisMenorDimensaoTerritorial(){
    Pais paisMenor = this->paises[0];
    /*if(paisMenor.getArea() < this->paises[i].getArea()){
        paisMenor = paises[i];
    }*/
    return paisMenor;
}
double Continente::getRazaoTerritorialMaiorMenor(){
    Pais *pais = new Pais;
    pais[0] = this->getPaisMaiorDimensaoTerritorial();
    pais[1] = this->getPaisMenorDimensaoTerritorial();

    return pais[0].getPopulacao()/pais[0].getPopulacao();
}