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
        void setAltura();
        void setLargura();
        void incrementarAltura();
        void incrementarLargura();
        void decrementarAltura();
        void decrementarLargura();
        double calculaPerimetro();
        double calculaArea();
    //Construtores    
    Retangulo();
    Retangulo(double altura,double largura);

};

/*Crie um método para incrementar a altura em 1.
j. Crie um método para incrementar a largura em 1.
k. Crie um método para decrementar a altura em 1.
l. Crie um método para decrementar a largura em 1.
m. Crie um método retornar o perímetro do retângulo.
n. Crie um método retornar a área do retângulo*/

#endif