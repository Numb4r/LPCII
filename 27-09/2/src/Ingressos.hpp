#include <iostream>
using namespace std;
#ifndef __INGRESSOS_HPP
#define __INGRESSOS_HPP
class Ingressos{
    private:
        string nome;
        int horaInicio;
        string localRealizacao;
        string dataRealizacao;
        int quantidadeExpectadores;
        int quantidadeExpectadoresMaximo;
        float precoIngresso;
        float dinheroArrecadado;
        void setDinheroArrecadado(float dinhero);
    public:
        //Getters
        string getNome();
        int getHoraInicio();
        string getLocalRealizacao();
        string getDataRealizacao();
        int getQuantidadeExpectadores();
        int getQuantidadeExpectadoresMaximo();
        float getPrecoIngresso();
        float getDinheiroArrecadado();
        //Setters
        void setNome(string nome);
        void setHoraInicio(int horaInicio);
        void setLocalRealizacao(string localRealizacao);
        void setDataRealizacao(string dataRealizacao);
        void setQuantidadeExpectadores(int quantidadeExpectadores);
        void setQuantidadeExpectadoresMaximo(int quantidadeExpectadoresMaximo);
        void setPrecoIngresso(float precoIngresso);

        int getIngressosRestantes();
        int venderIngresso(int quantidadeIngressosVendidos);
        //Construtores
        Ingressos();
        Ingressos(string nome,int horaInicio,string localRealizacao,string dataRealizacao,int quantidadeExpectadoresMaximo,float precoIngresso);


};
#endif