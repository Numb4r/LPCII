#include "ExcecaoPacienteInexistente.hpp"

ExcecaoPacienteInexistente::ExcecaoPacienteInexistente()
    :runtime_error("Impossível remover paciente. CPF não existe"){}