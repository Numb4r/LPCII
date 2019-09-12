#include <iostream>
#include "ContaCorrente.hpp"
using namespace std;

int main()
{
    ContaCorrente *contas = new ContaCorrente[5];
    string nome;
    int cpf;
    float saldo;
    cout <<"Entre com o nome,cpf e saldo da conta"<<endl;
    cin>>nome>>cpf>>saldo;
    contas[0] = ContaCorrente(nome,cpf,saldo);
    for (int i = 1; i < 5; i++)
    {
        nome.append("a");
        cpf+=i;
        saldo+=i;
        contas[i] = ContaCorrente(nome,cpf,saldo);
    }
    contas[0].imprimirPessoaComMaiorSaldo(contas);
    contas[0].imprimirPessoaComMenosSaldo(contas);
    contas[0].calcularMediaConta(contas);
    cout <<"A media de saldo de contas corrente : "<< contas[0].calcularMediaConta(contas);
    
    
    return 0;
}
