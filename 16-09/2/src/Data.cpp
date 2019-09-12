#include "Data.hpp"
#include <string>
using namespace std;
//Setters
void Data::setDia(int dia){
    if (dia < 0)
    {
        dia*=-1;
    }else if(dia == 0 || dia > 31){ 
        dia = 1;
    }
    this->dia = dia;    
}
void Data::setMes(int mes){
    if (mes < 0)
    {
        mes*=-1;
    }else if(mes == 0 || mes > 12){
        mes = 1;
    }
    this->mes = mes;
}
void Data::setAno(int ano){
    if (ano < 0){
        ano *=-1;
    }else if(ano == 0){
        ano  = 1900;
    }
    this->ano = ano;
}
//Getters
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
//Construtor

            Data::Data(){
                time_t  currenttime = time(0);
                tm* ltm = localtime(&currenttime);
                this->setDia(ltm->tm_mday);
                this->setMes(1+ltm->tm_mon);
                this->setAno(1900 + ltm->tm_year);
            }
            Data::Data(int dia,int mes,int ano){
                this->setDia(dia);
                this->setMes(mes);
                this->setAno(ano);
            }
void Data::toNextDay(){
    if(this->getDia() == 30 || (this->getDia() == 28 && this->getMes() == 2 ) || (this->getDia() == 29 && this->getAno()%4 == 0 )){
        this->setDia(1);
        if(this->getMes() == 12){
            this->setMes(1);
            this->setAno(this->getAno()+1);
        }else{
            this->setMes(this->getMes()+1);
        }

    }else{
        this->setDia(this->getDia()+1);
    }
}

string Data::toString(){
    string data ;
    data.append(to_string(this->getDia()));
    data.append("/");
    data.append(to_string(this->getMes()));
    data.append("/");
    data.append(to_string(this->getAno()));
    return data;
}


