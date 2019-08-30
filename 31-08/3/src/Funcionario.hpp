#ifndef __FUNCIONARIO_HPP
#define __FUNCIONARIO_HPP
#include <iostream>
using namespace std;
class Funcionario
{
    private:
        string departamento;
        double salario;
        string dataDeEntrada;
        string RG;

    public:
    //Getters
    string getDepartamento();
    double getSalario();
    string getDataDeEntrada();
    string getRG();
    //Setters
    void setDepartamento(string departamento);
    void setSalario(double salario);
    void setDataDeEntrada(string dataDeEntrada);
    void setRG(string RG);

    void aumentaSalarioPorcentagem(int porcentagem);
    void aumentaSalarioBruto(double valor);
    double calculoGanhoAnual();
    Funcionario(){};
    Funcionario(string departamento,double salario,string dataDeEntrada,string RG){
        this->setDataDeEntrada(dataDeEntrada);
        this->setDepartamento(departamento);
        this->setRG(RG);
        this->setSalario(salario);

    };
    


};


#endif