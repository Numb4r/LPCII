#include <iostream>
#include "Retangulo.hpp"
using namespace std;

//Getters
double Retangulo::getAltura(){
    return altura;
}
double Retangulo::getLargura(){
    return largura;
}

//Setters

void Retangulo::setAltura(double altura){
    this->altura = altura;
}

void Retangulo::setLargura(double largura){
    this->largura = largura;
}


void Retangulo::incrementarAltura(){
    altura+=1;
}
void Retangulo::incrementarLargura(){
    largura+=1;
}
void Retangulo::decrementarAltura(){
    altura-=1;
}
void Retangulo::decrementarLargura(){
    largura-=1;
}
double Retangulo::calcularPerimetro(){
    return 2*altura+2*largura;
}
double Retangulo::calcularArea(){
    return (altura*largura);
}
//Construtor
Retangulo::Retangulo(){
        this->setAltura(0);
        this->setLargura(0);
}
Retangulo::Retangulo(double altura,double largura){
        this->setAltura(altura);
        this->setLargura(largura);
}
