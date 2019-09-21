#include <iostream>
#ifndef __PACIENTE_HPP
#define __PACIENTE_HPP
class Paciente{
    private:
        std::string nome;
        char sexo;
        std::string cpf; 
        std::string endereco;
        float peso;
    public:
        //Setters
        void setNome(std::string nome);
        void setSexo(char sexo);
        void setCPF(std::string cpf);
        void setEndereco(std::string endereco);
        void setPeso(float peso);
        //Getters
        std::string getNome();
        char getSexo();
        std::string getCPF();
        std::string getEndereco();
        float getPeso();
        void imprimir();
        //Construtor
        Paciente();
        Paciente(std::string nome,char sexo,std::string cpf,std::string endereco,float peso);
};
#endif