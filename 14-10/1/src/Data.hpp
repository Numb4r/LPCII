#include <iostream>
#include <ctime>
using namespace std;
#ifndef __DATA_HPP
#define __DATA_HPP
class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        //Getters
        int getDia();
        int getMes();
        int getAno();
        //Setters
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        string toString();
        //Construtores
        Data();
        Data(int dia,int mes,int ano);
};
#endif