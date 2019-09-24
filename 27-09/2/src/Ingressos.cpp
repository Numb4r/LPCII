#include "Ingressos.hpp"
//Ingressos::getters
string Ingressos::getNome(){
    return nome;
}
int Ingressos::getHoraInicio(){
    return horaInicio;
}
string Ingressos::getLocalRealizacao(){
    return localRealizacao;
}
string Ingressos::getDataRealizacao(){
    return dataRealizacao;
}
int Ingressos::getQuantidadeExpectadores(){
    return quantidadeExpectadores;
}
int Ingressos::getQuantidadeExpectadoresMaximo(){
    return quantidadeExpectadoresMaximo;
}
float Ingressos::getPrecoIngresso(){
    return precoIngresso;
}
//Ingressos::setters
void Ingressos::setNome(string nome){
    this->nome = nome;
}
void Ingressos::setHoraInicio(int horaInicio){
    this->horaInicio = horaInicio;
}
void Ingressos::setLocalRealizacao(string localRealizacao){
    this->localRealizacao = localRealizacao;
}
void Ingressos::setDataRealizacao(string dataRealizacao){
    this->dataRealizacao = dataRealizacao;
}
void Ingressos::setQuantidadeExpectadores(int quantidadeExpectadores){
    this->quantidadeExpectadores = quantidadeExpectadores;
}
void Ingressos::setQuantidadeExpectadoresMaximo(int quantidadeExpectadoresMaximo){
    this->quantidadeExpectadoresMaximo = quantidadeExpectadoresMaximo;
}
void Ingressos::setPrecoIngresso(float precoIngresso){
    this->precoIngresso = precoIngresso;
}

int Ingressos::getIngressosRestantes(){
    return this->quantidadeExpectadoresMaximo - this->quantidadeExpectadores;
}
int Ingressos::venderIngresso(int quantidadeIngressosVendidos){
    if (this->getIngressosRestantes()  == 0)
    {
        return 0;   
    }
    if ((this->getIngressosRestantes() + quantidadeIngressosVendidos)>=this->quantidadeExpectadoresMaximo)
    {
        cout<<"Foram vendidos apenas "<< this->getIngressosRestantes() << " ingressos,ja que a quantidade excede o limite"<<endl;
        this->quantidadeExpectadores = this->quantidadeExpectadoresMaximo;
        return 1;
    }else{
        
    }
    

    
}
//Construtores
Ingressos::Ingressos(){}
Ingressos::Ingressos(string nome,int horaInicio,string localRealizacao,string dataRealizacao,int quantidadeExpectadoresMaximo,float precoIngresso){}