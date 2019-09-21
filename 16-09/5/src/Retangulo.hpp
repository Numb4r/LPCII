#ifndef __RETANGULO_HPP
#define __RETANGULO_HPP

class Retangulo
{
    private:
        double altura;
        double largura;
    public:
        //Getters
        double getAltura();
        double getLargura();
        //Setters
        void setAltura(double altura);
        void setLargura(double largura);
        void incrementarAltura();
        void incrementarLargura();
        void decrementarAltura();
        void decrementarLargura();
        double calcularPerimetro();
        double calcularArea();
        //Construtores    
        Retangulo();
        Retangulo(double altura,double largura);
};

#endif