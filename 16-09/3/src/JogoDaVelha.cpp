#include "JogoDaVelha.hpp"
#include <iostream>
using namespace std;
//Setters
void JogoDaVelha::setPedra(){
    this->pedra = this->getPedra() == 'X' ? 'O' : 'X';
    //Funcao para trocar o valor da pedra a cada vez que for chamada
}
void JogoDaVelha::setVitorioso(char pedra){
    this->vitorioso = pedra;
}
//Getters
char JogoDaVelha::getPedra(){
    return pedra;

}
char JogoDaVelha::getVitorioso(){
    return vitorioso;
}
//Construtor
JogoDaVelha::JogoDaVelha(){
        this->iniciarMatriz();
        this->setVitorioso(' ');
        this->setPedra();
}
void JogoDaVelha::iniciarMatriz(){
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            this->matriz[i][j] = '*';
}
void JogoDaVelha::mostrarMatriz(){
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            cout << this->matriz[i][j] << " ";
        cout << endl;   
    }
}
// Essa funcao sera chamada,passando por parametro a posicao da jogada
// Retornara 0 se nao foi possivel efetuar a jogada
// Retornara 1 se foi possivel fazer a jogada,mas ainda nao houve vitoria
// Retornara 2 se foi vitoria
// Retornara 3 se foi possivel fazer a jogada,mas houve empate
int JogoDaVelha::fazerJogada(int posX,int posY){
    if (this->matriz[posX][posY] == '*' && posY < 3 && posY >=0)
    {
        this-> matriz[posX][posY] = this->getPedra();
         if (this->vitoria(posX,posY) == 2)
            return 3;
        else if (this->vitoria(posX,posY) == 1)
            return 2;
        this->setPedra();
        return 1;
    }else
        return 0;
}
bool JogoDaVelha::empate(){
    int countAst = 9;
    for (size_t i = 0; i < 3; i++)
        for (size_t j = 0; j < 3; j++)
            countAst += this->matriz[i][j] == '*' ? 0 : -1;
    return countAst == 0 ? true : false;
}
// Modularizei os comparativos de cada possibilidade de vitoria
// Retorna o numero do jogador caso tenha vencido
int JogoDaVelha::vitoriaLinha(int posX){
    int count = 0;
    for (size_t i = 0; i < 3; i++)
        count += this->matriz[posX][i] == this->getPedra() ? 1 : 0;
    return count == 3 ? 1 : 0;
}
int JogoDaVelha::vitoriaColuna(int posY){
    int count = 0;
    for (size_t i = 0; i < 3; i++)
        count += this->matriz[i][posY] == this->getPedra() ? 1 : 0;
    return count == 3 ? 1 : 0;
}
int JogoDaVelha::vitoriaDiagonal(){
    int diagonalPrincipal = 0,diagonalSegundaria = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
            if (i == j)
                diagonalPrincipal+= this->matriz[i][j] == this->getPedra() ? 1 : 0;
            if (i == (2-j))
                diagonalSegundaria+= this->matriz[i][j] == this->getPedra() ? 1 : 0;
        }
    if (diagonalPrincipal == 3 || diagonalSegundaria == 3)
        return 1;
    return 0;
}
/*
    A função retornara 0 se ainda nao houve vencedor
    Retornara 1 numero do jogador caso o mesmo venca
    Retornara 2 caso de empate
*/
int  JogoDaVelha::vitoria(int posX,int posY){
    if (this->empate() == true)
        return 2;
    if(this->vitoriaLinha(posX) || this->vitoriaColuna(posY) ||this->vitoriaDiagonal()){
        this->setVitorioso(this->getPedra());
        return 1;
    }
    return 0;
}