#include <stdexcept>
#pragma once
using namespace std;
class ExceptionInvalidEmail : public runtime_error{
    public:
    ExceptionInvalidEmail();
};