#include <stdexcept>
#pragma once
using namespace std;

class ExcecaoSexoInvalido : public runtime_error{
    public:
        ExcecaoSexoInvalido();
};