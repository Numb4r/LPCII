#include <iostream>
#include <vector>

using namespace std;
#ifndef __PAIS_HPP
#define __PAIS_HPP
class Pais{
    private:
        string nome;
        string capital;
        vector<string> paisesFronteira;
        double dimensao;
    public:
        //Getters
        string getNome();
        string getCapital();
        double getDimensao();
        void verificarFronteiras();
        //Setters
        void setNome(string nome);
        void setCapital(string capital);
        void setDimensao(double dimensao);
        void setFronteira(vector<string> fronteira);
        
        void verificarSePaisEIgual(Pais x);
        //Contrutor
        Pais();
        Pais(string nome,string capital,vector<string> paisFronteira,double dimensao);



};
#endif