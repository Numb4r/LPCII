#ifndef __PAIS_HPP
#define __PAIS_HPP
#include <string>
#include <vector>
using namespace std;
class Pais{
    private:
        string nome;
        string nomeCapital;
        double populacao;
        double area;
        // Pais *fronteira[5];
        vector<Pais> fronteira;
    public:
        //Getters   
        string getNome();
        string getNomeCapital();
        double getPopulacao();
        double getArea();
        vector<Pais> getFronteira();
        //Setters
        void setNome(string nome);
        void setNomeCapital(string nomeCapital);
        void setPopulacao(double populacao);
        void setArea(double area);
        vector<Pais> getFronteira(vector<Pais> fronteira);
        Pais getFronteiraById(int id);
        //Contrutores
        Pais(string nome,string nomeCapital,double populacao,double area,vector<Pais> fronteira);
        Pais();
};
#endif