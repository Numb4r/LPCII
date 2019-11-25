#include "ExcecaoConsultaInexistente.hpp"

ExcecaoConsultaInexistente::ExcecaoConsultaInexistente(int cpf,string data)
        :runtime_error("Impossível remover Consulta. Paciente " +to_string(cpf)+ " não tem consulta agendada para a data " + data){

        }