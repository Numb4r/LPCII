#include "Evento.hpp"
//Evento::getters
string Evento::getNome(){
    return nome;
}
int Evento::getHoraInicio(){
    return horaInicio;
}
string Evento::getLocalRealizacao(){
    return localRealizacao;
}
string Evento::getDataRealizacao(){
    return dataRealizacao;
}
int Evento::getQuantidadeExpectadores(){
    return quantidadeExpectadores;
}
int Evento::getQuantidadeExpectadoresMaximo(){
    return quantidadeExpectadoresMaximo;
}
float Evento::getPrecoIngresso(){
    return precoIngresso;
}
float Evento::getDinheiroArrecadado(){
    return dinheroArrecadado;
}
//Evento::setters
void Evento::setNome(string nome){
    this->nome = nome;
}
void Evento::setHoraInicio(int horaInicio){
    if (horaInicio < 0 || horaInicio > 24)
    {
        horaInicio = 0;
    }
    this->horaInicio = horaInicio;
}
void Evento::setLocalRealizacao(string localRealizacao){
    this->localRealizacao = localRealizacao;
}
void Evento::setDataRealizacao(string dataRealizacao){
    this->dataRealizacao = dataRealizacao;
}

void Evento::setQuantidadeExpectadoresMaximo(int quantidadeExpectadoresMaximo){
    this->quantidadeExpectadoresMaximo = quantidadeExpectadoresMaximo;
}
void Evento::setPrecoIngresso(float precoIngresso){
    this->precoIngresso = precoIngresso;
    this->atualizarDinheiroArrecadado();
}
void Evento::atualizarDinheiroArrecadado(){
    dinheroArrecadado = quantidadeExpectadores * precoIngresso;
}
int Evento::getIngressosRestantes(){
    return this->quantidadeExpectadoresMaximo - this->quantidadeExpectadores;
}
int Evento::venderIngresso(int quantidadeIngressosVendidos){
    if (this->getIngressosRestantes()  == 0)
    {
        return 0;   
    }
    
    if (this->getIngressosRestantes() < quantidadeIngressosVendidos)
    {
        cout<<"Foram vendidos apenas "<< this->getIngressosRestantes() << " ingressos,ja que a quantidade excede o limite"<<endl;
        this->quantidadeExpectadores = this->quantidadeExpectadoresMaximo;
        atualizarDinheiroArrecadado();
        return 1;
    }else{
        this->quantidadeExpectadores += quantidadeIngressosVendidos;
        atualizarDinheiroArrecadado();
        return 1;
    }
}
//Construtores
Evento::Evento(){}
Evento::Evento(string nome,int horaInicio,string localRealizacao,string dataRealizacao,int quantidadeExpectadoresMaximo,float precoIngresso){
    this->nome = nome;
    this->setHoraInicio(horaInicio);
    this->localRealizacao = localRealizacao;
    this->dataRealizacao = dataRealizacao;
    this->quantidadeExpectadoresMaximo = quantidadeExpectadoresMaximo;
    this->setPrecoIngresso(precoIngresso);
}