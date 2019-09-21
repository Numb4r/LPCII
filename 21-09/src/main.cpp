#include "Paciente.hpp"
#include "Consultorio.hpp"
#include <iostream>
#include <string>
using namespace std;

Paciente inserirPessoas(){
        std::string nome,cpf,endereco;
        char sexo;
        float peso;
        cout<<"Entre com o nome da pessoa :";
        cin.ignore();
        getline(cin,nome);
        cout<<"Entre com o peso da pessoa :";
        cin >> peso;
        cout<<"Entre com o CPF da pessoa  :";
        cin.ignore();
        getline(cin,cpf);
        cout<<"Entre com o sexo da pessoa :";
        cin>>sexo;
        cout<<"Entre com o endereco da pessoa :";
        cin.ignore();
        getline(cin,endereco);
        Paciente paciente = Paciente(nome,sexo,cpf,endereco,peso);
        return paciente;

}
Consultorio inserirConsultorio(){
    char aux;
    int total = 0;
    string nome,endereco,telefone;
    Paciente medico;
    cout<<"Entre com o nome do consultorio :" ;
    getline(cin,nome);
    cout<<"Entre com o endereco do consultorio :" ;
    getline(cin,endereco);
    cout<<"Entre com o telefone do consultorio :" ;
    getline(cin,telefone);
    cout<<"-----------------------------------"<<endl;
    cout << "Entre com os dados do medico :"<<endl;
    medico = inserirPessoas();//BUG: a primeira letra do medico desaparece[Seila como arrumar]
    cout<<"Deseja inserir pacientes?([S]im) / ([N]ao)"<<endl;
    cin >> aux;
    Consultorio consultorio = Consultorio(nome,endereco,telefone,medico);
    while (toupper(aux) == 'S' && total < 100)
    {   
        cout<<"----------------------------------------------"<<endl;
        consultorio.cadastrarPaciente(inserirPessoas());
        cout<<"----------------------------------------------"<<endl;
        total++;
        cout<<"Deseja inserir pacientes?([S]im) / ([N]ao)"<<endl;
        cin >> aux;

    }
    
    return consultorio;
}
int main()
{
    string cpf;
    Consultorio consultorio = inserirConsultorio();
    cout<<consultorio.getNome()<<endl;
    consultorio.getMedico().imprimir();
    consultorio.imprimirListaDeTodosOsPacientes();
    cout<<"Entre com um valor de cpf para remover um paciente : ";
    cin.ignore();
    getline(cin,cpf);
    if (consultorio.removerPaciente(cpf))
    {
        cout<<"Removido";
    }else{
        cout<<"Nao existe";
    }
    
    consultorio.imprimirListaDeTodosOsPacientes();    
    return 0;
}
