#include <iostream>
#include "Pais.hpp"
#include<vector>
using namespace std;
#ifndef __CONTINENTE__HPP
#define __CONTINENTE__HPP
class Continente{
    private:
        string nome;
        vector<Pais> paises;
    public:
        //Getters
        string getNome();
        vector<Pais> getPaises();
        Pais getPaisById(int id);
        //Setters
        void setNome(string nome);
        void setPaises(vector<Pais> paises);
        //Construtor
        Continente(string nome);
        Continente(string nome,vector<Pais> paises);
        double getDimensaoContinente();
        int getPopulacaoContinente();
        double getDensidadePopulacaoContinente();
        Pais getPaisMaiorPopulacao();
        Pais getPaisMenorPopulacao();
        Pais getPaisMaiorDimensaoTerritorial();
        Pais getPaisMenorDimensaoTerritorial();
        double getRazaoTerritorialMaiorMenor();
};

#endif