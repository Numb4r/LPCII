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
        Data(){
            time_t  currenttime = time(0);
            tm* ltm = localtime(&currenttime);
            this->setDia(ltm->tm_mday);
            this->setMes(1+ltm->tm_mon);
            this->setAno(1900 + ltm->tm_year);
        }
        Data(int dia,int mes,int ano){
            this->setDia(dia);
            this->setMes(mes);
            this->setAno(ano);
        }

};
#endif