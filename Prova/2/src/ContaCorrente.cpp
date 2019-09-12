#include <iostream>
#include <fstream>
#include "ContaCorrente.hpp"

using namespace std;
//Getters
string ContaCorrente::getNome(){
    return nome;
}
int ContaCorrente::getCPF(){
    return cpf;
}
float ContaCorrente::getSaldo(){
    return saldo;
}
//Setters
void ContaCorrente::setNome(string nome){
    this->nome = nome;
}
void ContaCorrente::setCPF(int cpf){
    this->cpf = cpf;
}
void ContaCorrente::setSaldo(float saldo){
    this->saldo = saldo;
}

float ContaCorrente::calcularMediaConta(ContaCorrente vet[]){
    float saldoMedio = 0;
    for (int i = 0; i < 5; i++)
    {
        saldoMedio+= vet[i].getSaldo();
    }
    return saldoMedio/5;
}
void ContaCorrente::imprimirPessoaComMenosSaldo(ContaCorrente vet[]){
    int aux = 0;
    for (size_t i = 0; i < 5; i++)
    {
        if ((vet[aux].getSaldo() > vet[i].getSaldo()) && (vet[i].getCPF() != 0) && (vet[i].getNome() !=""))
        {
            aux = i;
        }
    }
    cout <<"Pessoa com menor saldo:"<<endl;
    cout <<"Nome  :"<<vet[aux].getNome()<<endl;
    cout <<"CPF   :"<<vet[aux].getCPF()<<endl;
    cout <<"Saldo :"<<vet[aux].getSaldo()<<endl;
    
}
void ContaCorrente::imprimirPessoaComMaiorSaldo(ContaCorrente vet[]){
    int aux = 0;
    for (int i = 0; i < 5; i++)
    {
        if (vet[aux].getSaldo() < vet[i].getSaldo())
        {
            aux = i;
        }
    }
    cout <<"Pessoa com maior saldo:"<<endl;
    cout <<"Nome  :"<<vet[aux].getNome()<<endl;
    cout <<"CPF   :"<<vet[aux].getCPF()<<endl;
    cout <<"Saldo :"<<vet[aux].getSaldo()<<endl;
    cout <<"A saida foi gravada em disco"<<endl;
    ofstream file("output.txt");
    file<<"Pessoa com maior saldo"<<endl;
    file <<"Nome :" <<vet[aux].getNome() <<endl;
    file <<"CPF  :"<<vet[aux].getCPF() <<endl;
    file <<"Saldo:"<<vet[aux].getSaldo() <<endl;
}
//Construtor
ContaCorrente::ContaCorrente(){}
ContaCorrente::ContaCorrente(string nome,int cpf,float saldo){
    this->nome = nome;
    this->cpf = cpf;
    this->saldo = saldo;
}

