#include "Consulta.hpp"
//Consulta::getters
std::string Consulta::getData(){
    return data;
}
std::string Consulta::getHora(){
    return hora;
}
Medico Consulta::getMedico(){
    return medico;
}
Paciente Consulta::getPaciente(){
    return paciente;
}
//Consulta::setters
void Consulta::setData(std::string data){
    this->data = data;
}
void Consulta::setHora(std::string hora){
    this->hora = hora;
}
void Consulta::setMedico(Medico medico){
    this->medico = medico;
}
void Consulta::setPaciente(Paciente paciente){
    this->paciente = paciente;
}

void Consulta::imprimir(){
    cout<<"Data: "<<data<<endl;
    cout<<"Hora: "<<hora<<endl;
    cout<<"Medico: "<<medico.getNome();
    cout<<"Paciente: "<<paciente.getNome();
}
Consulta::Consulta(std::string data,std::string hora,Medico medico,Paciente paciente){
    this->data = data;
    this->hora = hora;
    this->medico = medico;
    this->paciente = paciente;
}
Consulta::Consulta(){}