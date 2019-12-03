#include <stdexcept>
#pragma once
using namespace std;
class ExceptionOutOfRange: public runtime_error{
    public:
        ExceptionOutOfRange();
};