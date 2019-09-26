#include "ContaBancaria.hpp"
#include <iostream>
using namespace std;
ContaBancaria::ContaBancaria(int ag,int cnt,float s){
	agencia = ag;
	conta = cnt;
	saldo = s;
}
ContaBancaria::ContaBancaria(int ag,int cnt){
	agencia = ag;
	conta = cnt;
	saldo = 0.0;
}
ContaBancaria::ContaBancaria(){}
int ContaBancaria::getAgencia(){
	return agencia;
}
void ContaBancaria::setAgencia(int a){
	this->agencia = a;
}
int ContaBancaria::getContaBancaria(){
	return conta;
}
void ContaBancaria::setContaBancaria(int ContaBancaria){
	this->conta = ContaBancaria;
}
float ContaBancaria::getSaldo(){
	return saldo;
}
void ContaBancaria::setSaldo(float saldo){
	this->saldo = saldo;
}
void ContaBancaria::saque(float valor){
	if(saldo>=valor)
		saldo-=valor;
}
void ContaBancaria::deposito(float valor){
	saldo+=valor;
}
