#ifndef __PACIENTE_HPP
#define __PACIENTE_HPP
#include "Pessoa.hpp"
class Paciente : public Pessoa
{
private:
    std::string relato;
    std::string dataUltimaConsulta;
    std::string medicacaoQueToma;
public:
    //Getters
    std::string getRelato();
    std::string getdataUltimaConsulta();
    std::string getMedicacaoQueToma();
    //Setters
    void setRelato(std::string relato);
    void setDataUltimaConsulta(std::string dataUltimaConsulta);
    void setMedicacaoQueToma(std::string medicacaoQueToma);

    void imprimir();
    explicit Paciente(std::string nome,char sexo,std::string endereco,int cpf,std::string telefone,std::string identidade,std::string relato,std::string dataUltimaConsulta,std::string medicacaoQueToma);
    Paciente();
};
#endif