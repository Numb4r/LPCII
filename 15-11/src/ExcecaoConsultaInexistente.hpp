#include <stdexcept>
#include <iostream>
using namespace std;

class ExcecaoConsultaInexistente : public runtime_error{
    ExcecaoConsultaInexistente(string cpf,string data);
};