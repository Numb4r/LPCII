#include <iostream> 
#include "Consultorio.hpp"
#include "Consulta.hpp"
#include "Medico.hpp"
#include "Paciente.hpp"
#include "Pessoa.hpp"
#include <string>
using namespace std;
Consultorio consultorio;
Consultorio  init(){
    std::string nome,telefone,endereco;
    cout << "Entre com o nome do consultorio"<<endl;
    getline(cin,nome);
    cout << "Entre com o endereco do consultorio"<<endl;
    getline(cin,endereco);
    cout <<  "Entre com o telefone do consultorio"<<endl;
    getline(cin,telefone);
    return Consultorio(nome,endereco,telefone);
}
void dashboardGUI(){
    cout<<"1.)Cadastrar medico "<<endl;
    cout<<"2.)Cadastrar paciente"<<endl;
    cout<<"3.)Cadastra consulta"<<endl;
    cout<<"4.)Imprimir dados dos medicos"<<endl;
    cout<<"5.)Imprimir consultas"<<endl;
    cout<<"6.)Imprimir consultas de um medico"<<endl;
    cout<<"7.)Imprimir dados dos pacientes"<<endl;
    cout<<"8.)Remover medico"<<endl;
    cout<<"9.)Remover paciente"<<endl;
    cout<<"10.)Remover consulta"<<endl;
    cout<<"0.)Sair"<<endl;
    cout<<"->";
}
void imprimirListaConsultaMedico(){
    int crm;
    consultorio.imprimirListaMedicos();
    cout<<"Entre com o crm do medico:";
    cin>>crm;
    consultorio.imprimirListaConsultasMedico(crm);
}

void removerMedico(){
    int crm;
    consultorio.imprimirListaMedicos();
    cout<<"Digite o CRM do medico a ser removido:"; 
    cin>>crm;
    if(consultorio.removerMedico(crm))
        cout << "Removido com sucesso"<<endl;
    else
        cout << "Nao foi possivel remover,medico nao cadastrado" <<endl;
    
    // cout<<endl;
}
void removerPaciente(){
    int cpf;
    consultorio.imprimirListaPacientes();
    cout<<"Digite o CPF do paciente:";
    cin>>cpf;
     if(consultorio.removerPaciente(cpf))
        cout << "Removido com sucesso"<<endl;
    else
        cout << "Nao foi possivel remover,paciente nao cadastrado" <<endl;
}
void removerConsulta(){
    int cpf,crm;
    cout<<"Entre com o cpf do paciente e o crm do medico para remover a consulta:";
    cin>>cpf>>crm;
     if(consultorio.removerConsulta(crm,cpf))
        cout << "Removido com sucesso"<<endl;
    else
        cout << "Nao foi possivel remover,informacoes nao sao validas" <<endl;
}
void cadastroPaciente(){
    std::string nome,endereco,telefone,identidade,relato,dataUltimaConsulta,medicacaoQueToma;
    char sexo;
    int cpf;
    cout<<"Nome:";
    getline(cin,nome);
    cout<<"Sexo:";
    cin>>sexo;
    cin.ignore();
    cout<<"Endereco:";
    getline(cin,endereco);
    cout<<"Identidade:";
    getline(cin,identidade);
    cout<<"CPF:";
    cin>>cpf;
    cin.ignore();
    cout<<"Relato:";
    getline(cin,relato);
    cout<<"Data da Ultima Consulta:";
    getline(cin,dataUltimaConsulta);
    cout<<"Medicacao que toma:";
    getline(cin,medicacaoQueToma);
    Paciente paciente =  Paciente(nome,sexo,endereco,cpf,telefone,identidade,relato,dataUltimaConsulta,medicacaoQueToma);
    consultorio.cadastrarPaciente(paciente);
}
void cadastroMedico(){
    std::string nome,endereco,telefone,identidade,especialidade;
    char sexo;
    int cpf,crm;
    cout<<"Nome:";
    getline(cin,nome);
    cout<<"Sexo:";
    cin>>sexo;
    cin.ignore();
    cout<<"Endereco:";
    getline(cin,endereco);
    cout<<"Identidade:";
    getline(cin,identidade);
    cout<<"CPF:";
    cin>>cpf;
    cin.ignore();
    cout<<"CRM:";
    cin>>crm;
    cin.ignore();
    cout<<"Especialidade:";
    getline(cin,especialidade);
    Medico medico =  Medico(nome,sexo,endereco,cpf,telefone,identidade,crm,especialidade);
    consultorio.cadastrarMedico(medico);
}
void cadastroConsulta(){
    std::string hora,data;
    int cpf,crm;
    cout<<"Hora:";
    getline(cin,hora);
    cout<<"Data:";
    getline(cin,data);
    cout<<"Digite o CRM do medico:";
    cin>>crm;
    cout<<"Digite o CPF do paciente:";
    cin>>cpf;
    Consulta  consulta = Consulta(data,hora,consultorio.getMedicoByCRM(crm),consultorio.getPacienteByCPF(cpf));
    consultorio.cadastrarConsulta(consulta);
}
void menu(){
    int aux = 1 ;
    while (aux != 0)
    {
        dashboardGUI();
        cin>>aux;
        cin.ignore();
        switch (aux)
        {
        case 1:
            cadastroMedico();
            break;
        case 2:
            cadastroPaciente();
            break;

        case 3:
            cadastroConsulta();
            break;
        case 4:
            consultorio.imprimirListaMedicos();
            break;
        case 5:
            consultorio.imprimirListaConsultas();
            break;
        case 6:
            imprimirListaConsultaMedico();
            break;
        case 7:
            consultorio.imprimirListaPacientes();
            break;
        case 8:
            removerMedico();
            break;
        case 9:
            removerPaciente();
            break;
        case 10:
            removerConsulta();
            break;
        default:
            break;
        }
        
    }
    

}

int main(){
    consultorio = init();
    menu();
    return 0;
}