#include "Evento.hpp"
#include <iostream>
#include <string>
using namespace std;
Evento iniciaEvento(){
    string nome,dataEvento,localRealizacao;
    int horaInicio,quantidadeMaxima;
    float preco;
    cout <<"Entre com o nome do Evento :";
    getline(cin,nome);
    cout << "Entre com a hora de inicio :";
    cin >> horaInicio;
    cout<< "Entre com a data do evento :";
    cin.ignore();
    getline(cin,dataEvento);
    cout<<"Entre com o local da realizacao :";
    getline(cin,localRealizacao);
    cout<<"Entre com a quantidade maxima de expectadores :";
    cin>>quantidadeMaxima;
    cout<<"Entre com o preco do ingresso :";
    cin>>preco;
    Evento evento = Evento(nome,horaInicio,localRealizacao,dataEvento,quantidadeMaxima,preco);
    return evento;
    
}

int main()
{   
    Evento evento = iniciaEvento();
    int quantidadeIngressosVendidos;
    cout<<"Entre com a quantidade de ingressos vendidos"<<endl;
    cin>>quantidadeIngressosVendidos;
    evento.venderIngresso(quantidadeIngressosVendidos);
    cout<<"A arrecadacao total foi "<<evento.getDinheiroArrecadado()<<endl;
    return 0;
}
