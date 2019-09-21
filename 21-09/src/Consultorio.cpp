#include "Consultorio.hpp"
#include <vector>
int Consultorio::contPaciente;
//Consultorio::getters
std::string Consultorio::getNome(){
    return nome;
}
std::string Consultorio::getEndereco(){
    return endereco;
}
std::string Consultorio::getTelefone(){
    return telefone;
}

Paciente Consultorio::getMedico(){
    return medico;
}

Paciente Consultorio::getPacienteById(int id){
    return vetPacientes.at(id);
}

//Consultorio::setters
void Consultorio::setNome(std::string nome){
    this->nome = nome;
}
void Consultorio::setEndereco(std::string endereco){
    this->endereco = endereco;
}
void Consultorio::setTelefone(std::string telefone){
    this->telefone = telefone;
}
void Consultorio::setMedico(Paciente medico){
    this->medico = medico;
}

int Consultorio::cadastrarPaciente(Paciente p){
    if(contPaciente < 100 ){
        if (p.getCPF()!= medico.getCPF())
        {
            for (int i = 0; i < contPaciente; i++)
            {
                if(vetPacientes.at(i).getCPF() == p.getCPF()){
                    cout<<"Impossivel inserir paciente\nCPF ja cadastrado"<<endl;
                    return 0;
                }
            }
        }else{
            cout<<"Impossivel inserir paciente\nCPF e o mesmo do medico"<<endl;
            return 0;
        }
    }else{
        cout<<"Impossivel inserir paciente\nCapacidade excedida!"<<endl;
        return 0;
    }
    vetPacientes.push_back(p);
    contPaciente++;
    return 1;
}

bool Consultorio::removerPaciente(string cpf){
    for (int i = 0; i < contPaciente ; i++)
    {
        if (vetPacientes.at(i).getCPF() == cpf)
        {
            vetPacientes.erase(vetPacientes.begin()+i);
            contPaciente--;
            return true;
        }
        
    }
    return false;
}

void Consultorio::imprimirListaDeTodosOsPacientes(){
    cout<<"\nImprimindo so pacientes :"<<endl;
    for (int i = 0; i < this->contPaciente; i++)
    {
        vetPacientes.at(i).imprimir();
        cout<<endl;
    }
    
}


Consultorio::Consultorio(){}
Consultorio::Consultorio(std::string nome,std::string endereco,std::string telefone,Paciente medico){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
    this->medico = medico;
}
