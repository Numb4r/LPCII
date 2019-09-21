#include <iostream>
using namespace std;
#ifndef __PAIS_HPP
#define __PAIS_HPP
class Pais
{
    private:
        string nome;
        int populacao;
        double area;
    public:
        //Getters
        string getNome();
        int getPopulacao();
        double getArea();
        //Setters
        void setNome(string nome);
        void setPopulacao(unsigned int populacao);
        void setArea(double area);
        //Construtor
        Pais();
        Pais(string nome,unsigned int populaco,double area);
};
#endif