#ifndef __CALCULADORA_HPP
#define __CALCULADORA_HPP


class Calculadora{

    private:
        double primeiroNumero;
        double segundoNumero;
        char operador;
        
    public:

        //Getters    
        double getPrimeiroNumero();
        double getSegundoNumero();
        char getOperador();
        //Setters
        void setPrimeiroNumero(double primeiroNumero);
        void setSegundoNumero(double segundoNumero);
        void setOperador(char operador);
        double calcular();
        void imprimirResultado();
        //Construtor
        Calculadora(double primeiroNumero,double segundoNumero,char operador){
            this->setPrimeiroNumero(primeiroNumero);
            this->setSegundoNumero(segundoNumero);
            this->setOperador(operador);
        }

};

#endif