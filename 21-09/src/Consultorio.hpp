#include "Paciente.hpp"
#include <vector>
#include <string>
using namespace std;
#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP
class Consultorio{
    private:
        string nome;
        string endereco;
        string telefone;
        Paciente medico;
        vector<Paciente> vetPacientes ;
    public:
        static int contPaciente;
        //Getters
        string getNome();
        string getEndereco();
        string getTelefone();
        Paciente getMedico();

        Paciente getPacienteById(int id);
        
        //Setters
        void setNome(string nome);
        void setEndereco(string endereco);
        void setTelefone(string telefone);
        void setMedico(Paciente medico);

        int cadastrarPaciente(Paciente p);

        bool removerPaciente(string cpf);

        void imprimirListaDeTodosOsPacientes();

        Consultorio();
        Consultorio(string nome,string endereco,string telefone,Paciente medico);
};
#endif