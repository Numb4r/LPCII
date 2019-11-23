#include "ExcecaoConsultaInexistente.hpp"

ExcecaoConsultaInexistente::ExcecaoConsultaInexistente(string cpf,string data)
        :runtime_error("Impossível remover Consulta. Paciente " +cpf+ " não tem consulta agendada para a data" + data){

        }