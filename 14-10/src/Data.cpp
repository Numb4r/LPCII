#include "Data.hpp"
#include "Data.hpp"
#include <string>
using namespace std;
//Setters
void Data::setDia(int dia){
    if (dia < 0)
    {
        dia*=-1;
    }else if(dia == 0 || dia > 30){ 
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
string Data::toString(){
    string data;
    data.append(to_string(this->getDia()));
    data.append("/");
    data.append(to_string(this->getMes()));
    data.append("/");
    data.append(to_string(this->getAno()));
    return data;
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