#include <iostream>
using namespace std;
#ifndef __CONTACORRENTE_HPP
#define __CONTACORRENTE_HPP
class ContaCorrente{
    private:
        string nome;
        int cpf;
        float saldo;
    public:
        //Getters
        string getNome();
        int getCPF();
        float getSaldo();
        //Setters
        void setNome(string nome);
        void setCPF(int cpf);
        void setSaldo(float saldo);

        float calcularMediaConta(ContaCorrente vet[]);
        void imprimirPessoaComMenosSaldo(ContaCorrente vet[]);
        void imprimirPessoaComMaiorSaldo(ContaCorrente vet[]);
        //Construtor
        ContaCorrente();
        ContaCorrente(string nome,int cpf,float saldo);
};

#endif