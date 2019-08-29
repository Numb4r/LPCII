#include "Empregado.hpp"
#include <string>
using namespace std;

//Setters
void Empregado::setPrimeiroNome(string primeiroNome){
    this->primeiroNome = primeiroNome;
}
                     
void Empregado::setSegundoNome(string segundoNome){
    this->segundoNome = segundoNome;
}
void Empregado::setSalarioMensal(float salarioMensal){
    if (salarioMensal >= 0){
        this->salarioMensal = salarioMensal;
    }else{
        this->salarioMensal = 0;
    }

}
//Getters
string Empregado::getPrimeiroNome(){
    return primeiroNome;
}
string Empregado::getSegundoNome(){
    return segundoNome;
}
float Empregado::getSalarioMensal(){
    return salarioMensal;
}

void Empregado::aumentarSalarioPorcentagem(int porcentagem){
    this->salarioMensal = this->salarioMensal + this->salarioMensal*porcentagem/100;
}