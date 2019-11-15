#include "Pessoa.hpp"
#ifndef __MEDICO_HPP
#define __MEDICO_HPP

class Medico : public Pessoa{
    private:
        int CRM;
        std::string especialidade;
        public:
        //Getters
        int getCRM();
        std::string getEspecialidade();

        //Setters
        void setCRM(int CRM);
        void setEspecialidade(std::string especialidade);

        void imprimir();
        Medico(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade,int CRM,std::string especialidade);
        Medico();
};
#endif
