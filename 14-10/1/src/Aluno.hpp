#include "Data.hpp"
#include <iostream>
using namespace std;
#ifndef __ALUNO_HPP
#define __ALUNO_HPP
class Aluno{
    private:
        string nome;
        int matricula;
        Data nascimento;
        string endereco;
        static int totalAluno; 
    public:
        //Setters
        void setNome(string nome);
        void setMatricula(int matricula);
        void setDataNascimento(int dia,int mes,int ano);
        void setEndereco(string endereco);
        //Getters
        string getNome();
        int getMatricula();
        string getDataNascimento();
        string getEndereco();

        void imprimirAluno();
        Aluno(string nome,string endereco,int diaNascimento,int mesNascimento,int anoNascimento);
        
};
#endif