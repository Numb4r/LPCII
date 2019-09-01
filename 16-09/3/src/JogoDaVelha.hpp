#ifndef __JOGODAVELHA_HPP
#define __JOGODAVELHA_HPP
#include <iostream>
using namespace std;

class JogoDaVelha{
    private :
        char matriz[3][3];
        char pedra;
        char vitorioso;
        void setPedra();
        void setVitorioso(char pedra);
        
        
    public:
        char getPedra();
        char getVitorioso();

        int fazerJogada(int posX,int posY);
        void mostrarMatriz();
        bool empate();
        int vitoriaLinha(int posX);
        int vitoriaColuna(int posY);
        int vitoriaDiagonal();
        int vitoria(int posX,int posY);
        void iniciarMatriz();
        

    //Construtores    
    JogoDaVelha(){
        this->iniciarMatriz();
        this->setVitorioso(' ');
        this->setPedra();
    }
    

};


#endif