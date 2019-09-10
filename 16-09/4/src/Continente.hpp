#include <iostream>
#include "Pais.hpp"
using namespace std;
#ifndef __CONTINENTE__HPP
#define __CONTINENTE__HPP
class Continente{
    private:
        string nome;
        Pais *paises = new Pais;//TODO:Melhorar os metodos envolvendo paises
    public:
        //Getters
        string getNome();
        Pais getPaises();
        //Setters
        void setNome(string nome);
        void setPaises(Pais *paises);
        //Construtor
        Continente(string nome);
        Continente(string nome,Pais *paises);

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