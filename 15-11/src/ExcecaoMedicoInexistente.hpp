#include <stdexcept>
#pragma once

using namespace std;
class ExcecaoMedicoInexistente : public runtime_error{
    public:
        ExcecaoMedicoInexistente();
};