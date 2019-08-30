#include <iostream>
#include "Funcionario.hpp"
using namespace std;

int main()
{
    string departamento;
    double salario;
    string dataDeEntrada;
    string RG;
    string op;
    double novoSalario;
    cout << "Insira o departamento : ";
    cin >> departamento;
    cout << "Insira o salario mensal :";
    cin >> salario;
    cout << "Insira a data de ingresso no banco ";
    cin >> dataDeEntrada;
    cout << "Insira o RG :";
    cin >> RG;
    Funcionario funcionario = Funcionario(departamento,salario,dataDeEntrada,RG);
    cout <<"Salario Anual :" << funcionario.calculoGanhoAnual()<<endl;
    cout << "Insira o reajuste porcentual do salario"<<endl;
    cin >> novoSalario;
    funcionario.aumentaSalarioPorcentagem(novoSalario);
    cout << "Salario mensal " << funcionario.getSalario() << "\nSalario anual "<<funcionario.calculoGanhoAnual()<<endl;

    cout << "Insira o reajuste bruto do salario"<<endl;
    cin >> novoSalario;
    funcionario.aumentaSalarioBruto(novoSalario);
    cout << "Salario mensal " << funcionario.getSalario() << "\nSalario anual "<<funcionario.calculoGanhoAnual()<<endl;
    
    

    
    


    
    return 0;
}
