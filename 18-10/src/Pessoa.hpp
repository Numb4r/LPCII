#include <string>
using namespace std;
#ifndef __PESSOA_HPP
#define __PESSOA_HPP
// #pragma once
class Pessoa{
    protected:
        Pessoa();
    private:
        string nome;
        string endereco;
    public:
        //Getters
        string getNome();
        string getEndereco();
        //Setters
        void setNome(string nome);
        void setEndereco(string endereco);
        //Construtores
        Pessoa(string nome,string endereco);
};
#endif
