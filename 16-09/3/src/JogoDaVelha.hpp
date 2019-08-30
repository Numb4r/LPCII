#ifndef __JOGODAVELHA_HPP
#define __JOGODAVELHA_HPP
#include <iostream>
using namespace std;

class JogoDaVelha{
    private :
        int matriz[3][3];
    public:
        int fazerJogada(int posX,int posY,int jogador);
        void mostrarMatriz();
        bool empate();
        int vitoriaLinha(int posX,int jogador);
        int vitoriaColuna(int posY,int jogador);
        int vitoriaDiagonal(int posX,int posY,int jogador);
        int vitoria(int posX,int posY,int jogador);

        JogoDaVelha(){
            for (size_t i = 0; i < 3; i++)
            {
                for (size_t j = 0; j < 3; j++)
                {
                    this->matriz[i][j] = 0;
                }
                
            }
            

        }

};


#endif