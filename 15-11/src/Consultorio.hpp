#include <iostream>
#include <vector>
#include "Paciente.hpp"
#include "Medico.hpp"
#include "Consulta.hpp"
#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP
class Consultorio
{
private:
    std::string nome;
    std::string endereco;
    std::string telefone;
    vector<Medico> vetMedicos;
    vector<Paciente> vetPacientes;
    vector<Consulta> vetConsulta;

public:
    void cadastrarPaciente(Paciente paciente);
    void cadastrarMedico(Medico medico);
    bool removerPaciente(int CPF);
    bool removerMedico(int CRM);
    void cadastrarConsulta(Consulta consulta);
    bool removerConsultaByCPF(int cpf,std::string data = "0");
    bool removerConsultaByCRM(int crm,std::string data = "0");
    bool removerConsulta(int crm,int cpf);
    void imprimirListaPacientes();
    void imprimirListaMedicos();
    void imprimirListaConsultas();
    void imprimirListaConsultasMedico(int crm,std::string data = "0");
    Paciente getPacienteByCPF(int cpf);
    Medico getMedicoByCRM(int crm);
    //Setters
    void setNome(std::string nome);
    void setEndereco(std::string endereco);
    void setTelefone(std::string telefone);
    //Getters
    std::string getNome();
    std::string getEndereco();
    std::string getTelefone();


    Consultorio(std::string nome,std::string endereco,std::string telefone);
    Consultorio();
    
};
#endif