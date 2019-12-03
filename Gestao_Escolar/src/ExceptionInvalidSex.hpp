#include <stdexcept>

using namespace std;

class ExceptionInvalidSex : public runtime_error{
    public:
        ExceptionInvalidSex();
};