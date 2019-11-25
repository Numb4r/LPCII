#include <iostream> 
#include "Consultorio.hpp"
#include "Consulta.hpp"
#include "Medico.hpp"
#include "Paciente.hpp"
#include "Pessoa.hpp"
#include "ExcecaoMedicoInexistente.hpp"
#include "ExcecaoConsultaInexistente.hpp"
#include "ExcecaoSexoInvalido.hpp"
#include "ExcecaoPacienteInexistente.hpp"
#include <string>
using namespace std;
Consultorio consultorio;
// Medico medico = Pessoa();

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
    try
    {
        consultorio.removerMedico(crm);
    }
    catch(const ExcecaoMedicoInexistente& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
void removerPaciente(){
    int cpf;
    consultorio.imprimirListaPacientes();
    cout<<"Digite o CPF do paciente:";
    cin>>cpf;
    try{
        consultorio.removerPaciente(cpf);  
    }catch(const ExcecaoPacienteInexistente& e){
        cerr<<e.what()<<endl;
    };
}
void removerConsulta(){
    int cpf;
    std::string data = "0";
    cout<<"Entre com o cpf do paciente e a data para remover a consulta:";
    cin>>cpf;
    try{
        consultorio.removerConsulta(cpf);  
    }catch(const ExcecaoConsultaInexistente& e){
        cerr<<e.what()<<endl;
    };
}

void cadastroPaciente(){
    std::string nome,endereco,telefone,identidade,relato,dataUltimaConsulta,medicacaoQueToma;
    char sexo;
    int cpf;
    Paciente paciente;
    cout<<"Nome:";//TODO:Refatorar codigo duplicado
    getline(cin,nome);
    paciente.setNome(nome);
    while (true)
    {
        try
        {
            cout<<"Sexo:";
            cin>>sexo;
            paciente.setSexo(sexo);
            break;
        }
        catch(ExcecaoSexoInvalido& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cin.ignore();
    cout<<"Endereco:";
    getline(cin,endereco);
    paciente.setEndereco(endereco);
    cout<<"Identidade:";
    getline(cin,identidade);    
    paciente.setIdentidade(identidade);
    cout<<"CPF:";
    cin>>cpf;
    paciente.setCPF(cpf);
    cin.ignore();
    cout<<"Relato:";
    getline(cin,relato);
    paciente.setRelato(relato);
    cout<<"Data da Ultima Consulta:";
    getline(cin,dataUltimaConsulta);
    paciente.setDataUltimaConsulta(dataUltimaConsulta);
    cout<<"Medicacao que toma:";
    getline(cin,medicacaoQueToma);
    paciente.setMedicacaoQueToma(medicacaoQueToma);
    consultorio.cadastrarPaciente(paciente);
}

void cadastroMedico(){
    std::string nome,endereco,telefone,identidade,especialidade;
    char sexo;
    int cpf,crm;
    Medico medico =  Medico();
    cout<<"Nome:";
    getline(cin,nome);
    medico.setNome(nome);
    while (true)
    {
        try
        {
            cout<<"Sexo:";
            cin>>sexo;
            medico.setSexo(sexo);
            break;
        }
        catch(ExcecaoSexoInvalido& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cin.ignore();
    cout<<"Endereco:";
    getline(cin,endereco);
    medico.setEndereco(endereco);
    cout<<"Identidade:";
    getline(cin,identidade);    
    medico.setIdentidade(identidade);
    cout<<"CPF:";
    cin>>cpf;
    medico.setCPF(cpf);
    cin.ignore();
    cout<<"CRM:";
    medico.setCRM(crm);
    cin>>crm;
    cin.ignore();
    cout<<"Especialidade:";
    getline(cin,especialidade);
    medico.setEspecialidade(especialidade);
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