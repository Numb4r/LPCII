#include <iostream>
#include "Data.hpp"

using namespace std;


int main()
{   
    Data data = Data();
    cout<<data.getDia()<<endl;
    cout<<data.getMes()<<endl;
    cout<<data.getAno()<<endl;
    data.toNextDay();
    cout << data.getDia()<<endl;
    cout << data.toString()<<endl;
    return 0;
}
