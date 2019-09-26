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
        float populacao;
    public:
        //Getters
        string getNome();
        string getCapital();
        double getDimensao();
        float getPopulacao();
        void verificarFronteiras();
        //Setters
        void setNome(string nome);
        void setPopulacao(float populacao);
        void setCapital(string capital);
        void setDimensao(double dimensao);
        void setFronteira(vector<string> fronteira);
        void imprimirDados();
        int crecimentoPopulacional(Pais x,Pais y);
        bool verificarSePaisEIgual(Pais x);
        //Contrutor
        Pais();
        Pais(string nome,string capital,vector<string> paisFronteira,float populacao,double dimensao);
};
#endif