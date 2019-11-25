#include "Consultorio.hpp"

void Consultorio::cadastrarPaciente(Paciente paciente){
    vetPacientes.push_back(paciente);
}
void Consultorio::cadastrarMedico(Medico medico){
    vetMedicos.push_back(medico);
}
void Consultorio::removerPaciente(int CPF){
    bool removed = false;
    for (unsigned long int i = 0; i < vetPacientes.size(); i++)
    {
        if(vetPacientes.at(i).getCPF() == CPF){
            vetPacientes.erase(vetPacientes.begin()+i) ;
            removed = !removed;   
        }
    }
    if(!removed) throw ExcecaoPacienteInexistente();
}
void Consultorio::removerMedico(int CRM){
    bool removed = false;
    for(unsigned long int i = 0; i< vetMedicos.size();i++){
        if(vetMedicos.at(i).getCRM() == CRM){
            vetMedicos.erase(vetMedicos.begin()+1);
            removed = !removed;    
        }
    }
    if(!removed) throw ExcecaoMedicoInexistente() ;
}
void Consultorio::cadastrarConsulta(Consulta consulta){
    if (this->vetMedicos.size() != 0 || this->vetPacientes.size() != 0)
        vetConsulta.push_back(consulta);
    else
        cout<<"Nao foi possivel cadastrar a consulta,nao existem pacientes ou medicos cadastrados"<<endl;
}


void Consultorio::imprimirListaPacientes(){
    for (long unsigned int i = 0; i < vetPacientes.size(); i++)
    {
        vetPacientes.at(i).imprimir();
        
    }
}
void Consultorio::imprimirListaMedicos(){
    for (long unsigned int i = 0; i < vetMedicos.size(); i++)
    {
        vetMedicos.at(i).imprimir();
    }
}
void Consultorio::imprimirListaConsultas(){

    for (long unsigned int i = 0; i < vetConsulta.size(); i++)
    {
        vetConsulta.at(i).imprimir();
        cout<<"\n------------------------------------------"<<endl;
    }
    

}
void Consultorio::imprimirListaConsultasMedico(int crm,std::string data){
    for (long unsigned int i = 0; i < vetConsulta.size(); i++)
    {
        if (vetConsulta.at(i).getMedico().getCRM() == crm)
        {    
            if (vetConsulta.at(i).getData() == data)
            {
                vetConsulta.at(i).imprimir();
            }else{
               vetConsulta.at(i).imprimir();
            }
            cout<<"\n------------------------------------------"<<endl;
        }
        
    }
    
}
Paciente Consultorio::getPacienteByCPF(int cpf){
    for (long unsigned int i = 0; i < vetPacientes.size(); i++)
        if (vetPacientes.at(i).getCPF() == cpf)
            return vetPacientes.at(i);
    return Paciente();
}
Medico Consultorio::getMedicoByCRM(int crm){
    for (long unsigned int i = 0; i < vetMedicos.size(); i++)
        if (vetMedicos.at(i).getCPF() == crm)        
            return vetMedicos.at(i);     
    return Medico();
}
void Consultorio::removerConsulta(int cpf,std::string data){
    bool removed = false;
    for (long unsigned int i = 0; i < vetConsulta.size(); i++){
        if(vetConsulta.at(i).getPaciente().getCPF() == cpf &&  (data == "0" || vetConsulta.at(i).getData() == data )){
            vetConsulta.erase(vetConsulta.begin()+i);
            removed = !removed;   
        }
    }
    if(!removed) throw ExcecaoConsultaInexistente(cpf,data) ;
}
//Setters
void Consultorio::setNome(std::string nome){
    this->nome = nome;
}
void Consultorio::setEndereco(std::string endereco){
    this->endereco = endereco;
}
void Consultorio::setTelefone(std::string telefone){
    this->telefone = telefone;
}
//Getters
std::string Consultorio::getNome(){
    return nome;

}
std::string Consultorio::getEndereco(){
    return endereco;
}
std::string Consultorio::getTelefone(){
    return telefone;
}
Consultorio::Consultorio(std::string nome,std::string endereco,std::string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}
Consultorio::Consultorio(){}