#include "Paciente.hpp"

//Paciente::getters
std::string Paciente::getRelato(){
    return relato;
}
std::string Paciente::getdataUltimaConsulta(){
    return dataUltimaConsulta;
}
std::string Paciente::getMedicacaoQueToma(){
    return medicacaoQueToma;
}
//Paciente::setters
void Paciente::setRelato(std::string relato){
    this->relato = relato;
}
void Paciente::setDataUltimaConsulta(std::string dataUltimaConsulta){
    this->dataUltimaConsulta = dataUltimaConsulta;
}
void Paciente::setMedicacaoQueToma(std::string medicacaoQueToma){
    this->medicacaoQueToma = medicacaoQueToma;
}

void Paciente::imprimir(){
    Pessoa::imprimir();
    cout<<"Relato: "<<relato<<endl;
    cout<<"Data da ultima consulta: "<<dataUltimaConsulta<<endl;
    cout<<"Medicadao que toma: "<<medicacaoQueToma<<endl;
}
Paciente::Paciente(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade,std::string relato,std::string dataUltimaConsulta,std::string medicacaoQueToma):Pessoa(nome,sexo,endereco,cpf,telefone,identidade){
    this->relato = relato;
    this->dataUltimaConsulta = dataUltimaConsulta;
    this->medicacaoQueToma = medicacaoQueToma;
}
Paciente::Paciente(){}