#include "Pessoa.hpp"
#include <iostream>
using namespace std;
        //Setters
        void Pessoa::setPeso (float peso){
            this->peso = peso;
        }
        void Pessoa::setAltura (float altura){
            this->altura = altura;
        }
        void Pessoa::setSexo (char sexo){
            this->sexo = sexo;
        }
        void Pessoa::setNome (string nome){
            this->nome = nome;
        }
        void Pessoa::setCPF (int cpf){
            this->cpf = cpf;
        }
        void Pessoa::setIrmaos (string irmaos[]){
            for (size_t i = 0; i < 3; i++)
            {
                this->irmaos[i] = irmaos[i];
            }
            
        }
        //Getter
        float Pessoa:: getPeso (){
            return peso;
        }
        float Pessoa:: getAltura (){
            return altura;
        }
        char Pessoa::getSexo (){
            return sexo;
        }
        string Pessoa::getNome (){
            return nome;
        }
        int Pessoa::getCPF (){
            return cpf;
        }
        
        bool Pessoa::equals(Pessoa pessoa){
            return(this->getCPF() == pessoa.getCPF());
        }
        void Pessoa::imprimirPessoa(){
            cout << "---------------------------" <<endl;
            cout << "Nome   : " << this->getNome()<<endl;
            cout << "Sexo   : " << this->getSexo()<<endl;
            cout << "Peso   : "<< this->getPeso()<<endl;
            cout << "Altura : "<< this->getAltura()<<endl;

        }
        void Pessoa::imprimirIrmaos(){
            cout << "Lista de irmaos"<<endl;
            for (size_t i = 0; i < 3; i++)
            {
                cout << this->irmaos[i]<<endl;
            }
            

        }