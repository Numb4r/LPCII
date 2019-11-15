#include <iostream>
#include "Paciente.hpp"
#include "Medico.hpp"
#ifndef __CONSULTA_HPP
#define __CONSULTA_HPP
class Consulta
{
private:
    std::string data;
    std::string hora;
    Medico medico;
    Paciente paciente;
public:

    //Getters
    std::string getData();
    std::string getHora();
    Medico getMedico();
    Paciente getPaciente();
    //Setters
    void setData(std::string data);
    void setHora(std::string hora);
    void setMedico(Medico medico);
    void setPaciente(Paciente paciente);

    void imprimir();
    Consulta(std::string data,std::string hora,Medico medico,Paciente paciente);
    Consulta(); 
    
};
#endif