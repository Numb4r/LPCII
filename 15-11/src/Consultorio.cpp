#include "Consultorio.hpp"

void Consultorio::cadastrarPaciente(Paciente paciente){
    vetPacientes.push_back(paciente);
}
void Consultorio::cadastrarMedico(Medico medico){
    vetMedicos.push_back(medico);
}
bool Consultorio::removerPaciente(int CPF){
    
    for (unsigned long int i = 0; i < vetPacientes.size(); i++)
    {
        if(vetPacientes.at(i).getCPF() == CPF){
            vetPacientes.erase(vetPacientes.begin()+i) ;
            while (this->removerConsultaByCPF(CPF)){}
            return true;
        }
    }
    return false;
}
bool Consultorio::removerMedico(int CRM){
    unsigned long int i = 0;
    for(i = 0; i< vetMedicos.size();i++){
        if(vetMedicos.at(i).getCRM() == CRM){
            vetMedicos.erase(vetMedicos.begin()+1);
            while (this->removerConsultaByCRM(CRM)){}
            return true;
        }
    }
    return false;
}
void Consultorio::cadastrarConsulta(Consulta consulta){
    vetConsulta.push_back(consulta);
}
bool Consultorio::removerConsultaByCPF(int cpf,std::string data ){
    
    for (unsigned long int i = 0; i < vetConsulta.size(); i++)
    {
        if(vetConsulta.at(i).getPaciente().getCPF() == cpf){
            if (vetConsulta.at(i).getData() == data)
            {
                vetConsulta.erase(vetConsulta.begin()+1);    
                return true;
            }else{
                vetConsulta.erase(vetConsulta.begin()+1);
                return true;
            }
        }
    }
    return false;
}
bool Consultorio::removerConsultaByCRM(int crm,std::string data ){
    for (unsigned long int i = 0; i < vetConsulta.size(); i++)
    {
        if(vetConsulta.at(i).getMedico().getCRM() == crm){
            if (vetConsulta.at(i).getData() == data)
            {
                vetConsulta.erase(vetConsulta.begin()+1);    
                return true;
            }else{
                vetConsulta.erase(vetConsulta.begin()+1);
                return true;
            }
        }
    }
    return false;

}
void Consultorio::imprimirListaPacientes(){
    for (long unsigned int i = 0; i < vetPacientes.size(); i++)
    {
        cout<<vetPacientes.at(i).getNome()<<endl;
        
    }
}
void Consultorio::imprimirListaMedicos(){
    for (long unsigned int i = 0; i < vetMedicos.size(); i++)
    {
        cout<<vetMedicos.at(i).getNome()<<endl;
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
bool Consultorio::removerConsulta(int crm,int cpf){
    for (long unsigned int i = 0; i < vetConsulta.size(); i++){
        if(vetConsulta.at(i).getMedico().getCRM() == crm && vetConsulta.at(i).getPaciente().getCPF() == cpf){
            vetConsulta.erase(vetConsulta.begin()+i);
            return true;
        }
    }
    return false;
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