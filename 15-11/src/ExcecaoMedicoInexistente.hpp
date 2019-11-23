#include <stdexcept>

using namespace std;
class ExcecaoMedicoInexistente : public runtime_error{
    ExcecaoMedicoInexistente();
};