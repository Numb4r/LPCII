#include "Calculadora.hpp"
#include <iostream>

using namespace std;


        //Getters    
        double Calculadora::getPrimeiroNumero(){
            return primeiroNumero;
        }   
        double Calculadora::getSegundoNumero(){
            return segundoNumero;
        }
        char Calculadora::getOperador(){
            return operador;
        }
        //Setters
        void Calculadora::setPrimeiroNumero(double primeiroNumero){
            this->primeiroNumero = primeiroNumero;
        }
        void Calculadora::setSegundoNumero(double segundoNumero){
            this->segundoNumero = segundoNumero;
        }
        void Calculadora::setOperador(char operador){
            this->operador = operador;
        }



        double Calculadora::calcular(){
            switch (this->getOperador())
            {
            case '+':
                return this->getPrimeiroNumero()+this->getSegundoNumero();
                break;
            case '-':
                return this->getPrimeiroNumero()-this->getSegundoNumero();
                break;
            case '*':
                return this->getPrimeiroNumero()*this->getSegundoNumero();
                break;
            case '/':
                if (this->getSegundoNumero() == 0)
                {
                    cerr << "ERROR : IMPOSSIVEL DIVIDIR POR ZERO. RETORNANDO ";
                    return 0;
                }else{
                    return this->getPrimeiroNumero()/this->getSegundoNumero();
                }
                
            default:
                cerr << "ERROR : OPERADOR INVALIDO. RETORNANDO ";
                return 0;
                break;
            }
            

        }
        void Calculadora::imprimirResultado(){
            cout << this->getPrimeiroNumero() << " " << this->getOperador()<< " " << this->getSegundoNumero() << " = " << this->calcular()<<endl;
            

        }