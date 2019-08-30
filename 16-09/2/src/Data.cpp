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

void Data::toNextDay(){
    this->setDia(this->getDia()+1);
}

string Data::toString(){
    string data ;
    data.append(this->getDia());
    data.append("/");
    data.append(this->getMes());
    data.append("/");
    data.append(this->getAno());
    return data;
}
