#include <iostream>
#include "ExcecaoSexoInvalido.hpp"
using namespace std;
#ifndef __PESSOA_HPP
#define __PESSOA_HPP
class Pessoa
{
private:
    std::string nome;
    char sexo;
    std::string endereco;
    int cpf;
    std::string telefone;
    std::string identidade;
public:
    //Getters
    std::string getNome();
    char getSexo();
    int getCPF();
    std::string getTelefone();
    std::string getIdentidade();
    std::string getEndereco();
    //Setters
    void setNome(std::string nome);
    void setSexo(char sexo);
    void setCPF(int cpf);
    void setTelefone(std::string telefone);
    void setIdentidade(std::string identidade);
    void setEndereco(std::string endereco);

    void imprimir();


    Pessoa(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade);
    Pessoa();
    
};



#endif