#include <stdexcept>

using namespace std;
class ExcecaoPacienteInexistente : public runtime_error{
    public:
        ExcecaoPacienteInexistente();
};