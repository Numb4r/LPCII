#include "ExcecaoMedicoInexistente.hpp"

ExcecaoMedicoInexistente::ExcecaoMedicoInexistente()
        :runtime_error("Impossível remover médico.CRM não existe"){}