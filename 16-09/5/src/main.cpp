#include <iostream>
#include "Retangulo.hpp"
using namespace std;

int main()
{
    double altura,largura;
    cout << "Entre com a altura e largura do retangulo"<<endl;
    cin>>altura>>largura;
    Retangulo retangulo = Retangulo(altura,largura);
    cout<<"Area do retangulo : " << retangulo.calcularArea()<<endl;
    cout<<"Perimetro do retangulo : "<<retangulo.calcularPerimetro()<<endl;
    retangulo.incrementarAltura();
    retangulo.incrementarLargura();
    cout<<"Altura e largura incrementadas em 1"<<endl;
    cout<<"Nova area do retangulo : " << retangulo.calcularArea()<<endl;
    cout<<"Nova perimetro do retangulo : "<<retangulo.calcularPerimetro()<<endl;
    return 0;
}
