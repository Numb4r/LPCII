#include <iostream>
#include "ContaBancaria.hpp"

using namespace std;

int main(){
	ContaBancaria x (1234,99999);
	ContaBancaria y (345,345,1992);
	ContaBancaria z;
	cout<<"------------ X Utilizou construtor com 2 parametros ----------"<<endl;
	cout<<"AG: "<<x.getAgencia()<<" ,CNT " << x.getContaBancaria()<<endl;
	x.deposito(100);
	x.saque(50);
	cout<<"SALDO :"<<x.getSaldo();


	cout<<"\n\n------------- Y Utilizou construtor com 3 parametros -----------"<<endl;
	cout<<"AG: "<<y.getAgencia()<<" ,CNT: "<<y.getContaBancaria() <<endl;
	cout<<"SALDO :"<<y.getSaldo();
	
	cout<<"\n\n------------- Z Utilizou construtor com nenhum parametro  ------"<<endl;
	cout<<"AG: "<<z.getAgencia()<<" ,CNT: "<<z.getContaBancaria()<<endl;
	cout<<"SALDO :"<<z.getSaldo();
}
