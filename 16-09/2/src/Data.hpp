#ifndef __DATA_HPP
#define __DATA_HPP
#include <iostream>
using namespace std;

class Data
{
    private:
        int dia;
        int mes;
        int ano;
    public:
        //Setters
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        //Getters
        int getDia();
        int getMes();
        int getAno();
        string toString();
        void toNextDay();
        //Construtores
        Data();
        Data(int dia,int mes,int ano);
};
#endif