#include "Funcionario.hpp"
#include <iostream>

using namespace std;


    //Getters
    string Funcionario::getDepartamento(){
        return departamento ;
    }
    double Funcionario::getSalario(){
        return salario;
    }
    string Funcionario::getDataDeEntrada(){
        return dataDeEntrada;
    }
    string Funcionario::getRG(){
        return RG ;
    }
    //Setters
    void Funcionario::setDepartamento(string departamento){
        this->departamento = departamento;

    }
    void Funcionario::setSalario(double salario){
        if (salario<0)
        {
            salario = 0;
        }
        this->salario = salario;    

    }
    void Funcionario::setDataDeEntrada(string dataDeEntrada){
        this->dataDeEntrada = dataDeEntrada;

    }
    void Funcionario::setRG(string RG){
        this->RG = RG;
    }
    void Funcionario::aumentaSalarioPorcentagem(int porcentagem){
        this->setSalario(this->getSalario()+this->getSalario()*porcentagem/100);
    }
    void Funcionario::aumentaSalarioBruto(double valor){
        this->setSalario(this->getSalario()+valor);
    }
    double Funcionario::calculoGanhoAnual(){
        return this->getSalario()*13+this->getSalario()/3;
    }