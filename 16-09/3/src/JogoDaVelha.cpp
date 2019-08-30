#include "JogoDaVelha.hpp"
#include <iostream>

using namespace std;

int JogoDaVelha::fazerJogada(int posX,int posY,int jogador){
    if (this->matriz[posX][posY] == 0)
    {
        this-> matriz[posX][posY] = 1;
        return 1;
    }else{
        return 0;
    }
    
}
void JogoDaVelha::mostrarMatriz(){
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << matriz [i][j] << " ";
        }
        cout << endl;
        
    }
    
}
bool JogoDaVelha::empate(){
    int countZero = 9;
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            countZero += this->matriz[i][j] == 0 ? 0 : -1;
    return countZero == 0 ? true : false;
}

/*
    Modularizei os comparativos de cada possibilidade de vitoria
    Retorna o numero do jogador caso tenha vencido
*/
int JogoDaVelha::vitoriaLinha(int posX,int jogador){
    return 0;
}
int JogoDaVelha::vitoriaColuna(int posX,int jogador){

    return 0;
}
int JogoDaVelha::vitoriaDiagonal(int posX,int posY,int jogador){

    return 0;
}

/*
    A função retornara 0 se ainda nao houve vencedor
    Retornara o numero do jogador caso o mesmo venca
    Retornara 3 caso de empate

*/
int JogoDaVelha::vitoria(int posX,int posY,int jogador){
    if (this->empate() == true)
    {
        return 3;
    }
    if(this->vitoriaLinha(posX,jogador) == jogador || this->vitoriaColuna(posY,jogador) ||this->vitoriaDiagonal(posX,posY,jogador) == jogador){
        return jogador;
    }
        
    return 0;

}