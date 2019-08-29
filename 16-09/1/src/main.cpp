#include <iostream>
#include <string>
#include "Empregado.hpp"
using namespace std;

void preencherDados(Empregado *empregado){
    string nome,segundoNome;
    float salario;
    cout << "Entre com o novo primeiro nome  :";
    cin >> nome;
    cout << "Entre com o novo segundo nome   :";
    cin >> segundoNome;
    cout << "Entre com o novo salario        :";
    cin >> salario;
    empregado->setPrimeiroNome(nome);
    empregado->setSegundoNome(segundoNome);
    empregado->setSalarioMensal(salario);
    cout << "------------------------------------------------"<<endl;
     
}
int main()
{
    Empregado empregado[2] = {Empregado("","",0),Empregado("","",0)};
    
    preencherDados(&empregado[0]);
    preencherDados(&empregado[1]);
    cout << "------------------------------------------------"<<endl;
    cout <<"Nome                            :"<< empregado[0].getPrimeiroNome() <<" "<<  empregado[0].getSegundoNome()<<endl;
    cout <<"Salario Anual                   :"<< empregado[0].getSalarioMensal()*12<<endl;
    empregado[0].aumentarSalarioPorcentagem(10);
    cout <<"Salario Anual Reajustado        :"<< empregado[0].getSalarioMensal()*12<<endl;
    
    cout << "------------------------------------------------"<<endl;
    cout <<"Nome                            :"<< empregado[1].getPrimeiroNome() <<" "<< empregado[1].getSegundoNome()<<endl;
    cout <<"Salario Anual                   :"<<empregado[1].getSalarioMensal()*12<<endl;
    empregado[1].aumentarSalarioPorcentagem(10);
    cout <<"Salario Anual Reajustado        :"<< empregado[1].getSalarioMensal()*12<<endl;
    
    
    
    /*cout <<"Nome :"<< empregado.getPrimeiroNome() << " " << empregado.getSegundoNome()<<endl;
    cout << "Salario :"<< empregado.getSalarioMensal()<<endl;*/
    return 0;
}
