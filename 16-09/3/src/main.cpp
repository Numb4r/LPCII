#include <iostream>
#include "JogoDaVelha.hpp"

using namespace std;

int main()
{
    JogoDaVelha jogo;
    int posX,posY,c = 0;
    cout << "\t\t Bem vindo ao Jogo Da Velha"<<endl;
    do
    {
        jogo.mostrarMatriz();
        cout << "Digite duas posicoes,separadas por espaco,para jogar (Pedra : "<<jogo.getPedra()<<") : ";
        cin >> posX >> posY;
        c = jogo.fazerJogada(posX,posY); 
    }while(c!=2 && c!=3);

    cout << endl;
    jogo.mostrarMatriz();
    if (c == 3)
        cout << "Jogo empatado"<<endl;
    else
    {
        cout <<"Jogador "<<jogo.getVitorioso()<<" venceu"<<endl;
        cout<<"PARABENS!"<<endl;
    }
    return 0;
}

