#ifndef __EMPREGADO_HPP
#define __EMPREGADO_HPP
#include <string>
using namespace std;
class Empregado
{
    private:
        string primeiroNome;
        string segundoNome;
        float salarioMensal;
    public:
    //Setters
        void setPrimeiroNome(string primeiroNome);
        void setSegundoNome(string segundoNome);
        void setSalarioMensal(float salarioMensal);

    //Getters
        string getPrimeiroNome();
        string getSegundoNome();
        float getSalarioMensal();

        void aumentarSalarioPorcentagem(int porcentagem);
    //Construtor
        Empregado(string primeiroNome,string segundoNome,float salarioMensal);
    
};


#endif