#ifndef __CONTABANCARIA_HPP
#define __CONTABANCARIA_HPP
class ContaBancaria{
	private:
		int agencia;
		int conta;
		float saldo;
	public:
		ContaBancaria(int ag,int cnt,float s);
		ContaBancaria(int ag,int cnt);
		ContaBancaria();
		int getAgencia();
		void setAgencia(int a);
		int getContaBancaria();
		void setContaBancaria(int ContaBancaria);
		float getSaldo();
		void setSaldo(float saldo);
		void saque(float valor);
		void deposito(float valor);

};
#endif
