#include <stdexcept>
#include <iostream>
#pragma once
using namespace std;

class ExcecaoConsultaInexistente : public runtime_error{
    public:
        ExcecaoConsultaInexistente(int cpf,string data );
};