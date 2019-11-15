#include "Medico.hpp"
//Getters
int Medico::getCRM(){
    return CRM;
}
std::string Medico::getEspecialidade(){
    return especialidade;
}

//Setters
void Medico::setCRM(int CRM){
    this->CRM = CRM;
}
void Medico::setEspecialidade(std::string especialidade){
    this->especialidade = especialidade;
}
void Medico::imprimir(){
    Pessoa::imprimir();
    cout<<"CRM: "<<CRM<<endl;
    cout<<"Especialidade: " <<especialidade<<endl;
}
Medico::Medico(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade,int CRM,std::string especialidade):Pessoa(nome,sexo,endereco,cpf,telefone,identidade){
    this->CRM = CRM;
    this->especialidade = especialidade;
}