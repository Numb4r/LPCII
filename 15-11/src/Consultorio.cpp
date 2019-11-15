#include "Consultorio.hpp"

void Consultorio::cadastrarPaciente(Paciente paciente){
    vetPacientes.push_back(paciente);
}
void Consultorio::cadastrarMedico(Medico medico){
    vetMedicos.push_back(medico);
}
bool Consultorio::removerPaciente(int CPF){
    unsigned long int i = 0;
    for (i = 0; i < vetPacientes.size(); i++)
    {
        if(vetPacientes.at(i).getCPF() == CPF)
            break;
        else
            return false;//corrigir o retorno no primeiro caso
    }
    vetPacientes.erase(vetPacientes.begin()+i);
    //Remover consultas relacionadas
    return true;

}
bool Consultorio::removerMedico(int CRM){
    unsigned long int i = 0;
    for(i = 0; i< vetMedicos.size();i++){
        if(vetMedicos.at(i).getCRM() == CRM)
            break;
        else
            return false;//corrigir o retorno no primeiro caso
        
    }
    vetMedicos.erase(vetMedicos.begin()+i);
    //Remover consultas relacionadas
    return true;
}
void Consultorio::cadastrarConsulta(Consulta consulta){
    vetConsulta.push_back(consulta);
}
bool Consultorio::removerConsultaByCPF(int cpf,std::string data = "0"){
    unsigned long int i = 0;
    for (i = 0; i < vetConsulta.size(); i++)
    {
        if(vetConsulta.at(i).getPaciente().getCPF() == cpf){
            
        }else{
            return false;
        }
    }
    return true;
}
bool Consultorio::removerConsultaByCRM(int crm,std::string data = "0"){

}
void Consultorio::imprimirListaPacientes(){

}
void Consultorio::imprimirListaMedicos(){

}
void Consultorio::imprimirListaConsultas(){

}
void Consultorio::imprimirListaMedico(int crm,std::string data = "0"){

}

//Setters
void Consultorio::setNome(std::string nome){}
void Consultorio::setEndereco(std::string endereco){}
void Consultorio::setTelefone(std::string telefone){}
//Getters
std::string Consultorio::getNome(){

}
std::string Consultorio::getEndereco(){

}
std::string Consultorio::getTelefone(){

}


Consultorio::Consultorio(std::string nome,std::string endereco,std::string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}