#ifndef __PESSOA_HPP
#define __PESSOA_HPP
#include <string>
using namespace std;
class Pessoa
{
    public:
        float peso,altura;
        char sexo;
        string nome;
        int cpf;
        string irmaos[3];
        

        //Setters
        void setPeso (float peso);
        void setAltura (float altura);
        void setSexo (char sexo);
        void setNome (string nome);
        void setCPF (int cpf);
        void setIrmaos (string irmaos[]);
        //Getters
        float getPeso ();
        float getAltura ();
        char getSexo ();
        string getNome ();
        int getCPF ();

        bool equals(Pessoa pessoa);
        void imprimirPessoa();
        void imprimirIrmaos();


};




#endif