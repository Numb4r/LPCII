#include <iostream>
#include <cstdlib>
#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "System.hpp"
//TODO:Refatoracao do codigo
using namespace std;

System init(){
    string nome,endereco;
    cout<<"Entre com o nome da instituicao: ";
    getline(cin,nome);
    cout<<"Entre com o endereco da instituicao: ";
    getline(cin,endereco);
    return System(nome,endereco);
}
System sistema = init();
//=====================================================================================================
//          Funcoes de cadastro
//=====================================================================================================
Aluno cadastrarAluno(){
    cin.ignore();
    string matricula,  nome,  endereco, telefone,  email,  dataNascimento;
    int serie,cpf;
    char sexo;
    Aluno aluno;
    //Pessoa
    // string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo
    cout<<"\t\tCadastro de Aluno"<<endl;
    cout<<"Nome: ";
    getline(cin,nome);
    aluno.setNome(nome);
     while (true)
    {
        try
        {
            cout<<"Sexo: ";
            cin>>sexo;
            aluno.setSexo(sexo);
            break;
        }
        catch(const ExceptionInvalidSex& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cout<<"CPF: ";
    cin>>cpf;
    cin.ignore();
    aluno.setCpf(cpf);
    cout<<"Data de nascimento: ";
    getline(cin,dataNascimento);
    aluno.setDataNascimento(dataNascimento);
    cout<<"Endereco: ";
    getline(cin,endereco);
    aluno.setEndereco(endereco);
    cout<<"Telefone: ";
    getline(cin,telefone);
    aluno.setTelefone(telefone);
     while (true)
    {
        try
        {
            cout<<"Email: ";
            getline(cin,email);
            aluno.setEmail(email);
            break;
        }
        catch(const ExceptionInvalidEmail& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cout<<"Serie: ";
    cin>>serie;
    aluno.setSerie(serie);
    matricula = "2019" + to_string(rand()%1000000);
    aluno.setMatricula(matricula);
    return aluno;
}
Professor cadastrarProfessor(){
    cin.ignore();
     string   nome,  endereco, telefone,  email,  dataNascimento,admissao,formacao;
     

    int cpf;
    char sexo;
    Professor professor;
    //Pessoa
    // string nome, string endereco, string telefone, string email, string dataNascimento, int cpf, char sexo
    cout<<"\t\tCadastro de Professor"<<endl;
    cout<<"Nome: ";
    getline(cin,nome);
    professor.setNome(nome);
     while (true)
    {
        try
        {
            cout<<"Sexo: ";
            cin>>sexo;
            professor.setSexo(sexo);
            break;
        }
        catch(const ExceptionInvalidSex& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cout<<"CPF: ";
    cin>>cpf;
    cin.ignore();
    professor.setCpf(cpf);
    cout<<"Data de nascimento: ";
    getline(cin,dataNascimento);
    professor.setDataNascimento(dataNascimento);
    cout<<"Endereco: ";
    getline(cin,endereco);
    professor.setEndereco(endereco);
    cout<<"Telefone: ";
    getline(cin,telefone);
    professor.setTelefone(telefone);
     while (true)
    {
        try
        {
            cout<<"Email: ";
            getline(cin,email);
            professor.setEmail(email);
            break;
        }
        catch(const ExceptionInvalidEmail& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    cout<<"Formacao: ";
    getline(cin,formacao);
    professor.setFormacao(formacao);
    cout<<"Data de admissao: ";
    getline(cin,admissao);
    professor.setAdmissao(admissao);
    return professor;
}
Disciplina cadastrarDisciplina(){
    cin.ignore();
    string codigostr = "2019" + to_string(rand()%1000000);
    int codigo = atoi(codigostr.c_str());
    unsigned long int id;
    string nome;

    cout<<"\t\tCadastro de Disciplina"<<endl;
    cout<<"Nome da disciplina: ";
    getline(cin,nome);
    Disciplina disciplina = Disciplina(nome,codigo);
    sistema.imprimirProfessores(true);
    while (true)
    {
        cout<<"\nEntre com o professor da materia: ";
        cin>>id;
        if (id < sistema.getVectorProfessores().size()) break;
    }
    disciplina.setProfessor(sistema.getProfessorByIdReference(id));//TODO:Verificar passagem por referencia
    cout<<"Deseja acrescentar alunos?"<<endl;
    cout<<"1.Sim\n2.Nao"<<endl;
    cin>>id;
    
    while (id == 1 )
    {
        sistema.imprimirAlunos(true);
        while (true)
        {
            cout<<"\nEntre com o aluno: ";
            cin>>id;
            if(id<sistema.getVectorAlunos().size())break;
            
        }

        disciplina.cadastrarAluno(sistema.getAlunoByIdReference(id));
        cout<<"Deseja acrescentar alunos?"<<endl;
        cout<<"1.Sim\n2.Nao"<<endl;
        cin>>id;    
    }
    return disciplina;
}
//=====================================================================================================
//              Funcoes de remocao
//=====================================================================================================-
void removerAluno(){
    unsigned long int id = 0;
    cout<<"\t\tRemocao de Aluno"<<endl;
    sistema.imprimirAlunos(true);
    while (true)
    {
        cout<<"\n-1 para cancelar"<<endl;
        cout<<"~>";
        cin>>id;
        if(id == static_cast<unsigned long int>(-1)){
            break;
        }else{
            if(id < sistema.getVectorAlunos().size()){
                sistema.removerAluno(id);
                break;
            }
        }
    }
}

void removerProfessor(){
    unsigned long int id = 0;
    cout<<"\t\tRemocao de Professor"<<endl;
    sistema.imprimirProfessores(true);
    while (true)
    {
        cout<<"\n-1 para cancelar"<<endl;
        cout<<"~>";
        cin>>id;
        if(id == static_cast<unsigned long int>(-1)){
            break;
        }else{
            if(id < sistema.getVectorProfessores().size()){
                sistema.removerProfessor(id);
                break;
            }
        }
    }
}

void removerDisciplina(){
    unsigned long int id = 0;
    cout<<"\t\tRemocao de Disciplina"<<endl;
    sistema.imprimirDisciplinas(true);
    while (true)
    {
        cout<<"\n-1 para cancelar"<<endl;
        cout<<"~>";
        cin>>id;
        if(id == static_cast<unsigned long int>(-1)){
            break;
        }else{
            if(id < sistema.getVectorDisciplina().size()){
                sistema.removerDisciplina(id);
                break;
            }
        }
    }
}
void GUI(){
    cout<<"\t\tMenu"<<endl;
    cout<<"1.Cadastrar Professor"<<endl;
    cout<<"2.Cadastrar Aluno"<<endl;
    cout<<"3.Cadastrar Disciplina"<<endl;
    cout<<"4.Remover Professor"<<endl;
    cout<<"5.Remover Aluno"<<endl;
    cout<<"6.Remover Disciplina"<<endl;
    cout<<"7.Imprimir"<<endl;
    cout<<"0.Sair"<<endl;
    cout<<"~>";
}
void menuImpressao(){
    int op = 0;
    cout<<"1.Imprimir todos os alunos"<<endl;
    cout<<"2.Imprimir todos os professores"<<endl;
    cout<<"3.Imprimir todas as materias"<<endl;
    cin>>op;
    switch (op)
    {
    case 1:
        sistema.imprimirAlunos();
        break;
    case 2:
        sistema.imprimirProfessores();
        break;
    case 3:
        sistema.imprimirDisciplinas();
        break;
    default:
        break;
    }
}
void menu(){
    int op = 999;
    while (op != 0)
    {
        GUI();
        cin>>op;
        switch (op)
        {
        case 1:
            sistema.cadastrarProfessor(cadastrarProfessor());
            break;
        case 2:
            sistema.cadastrarAluno(cadastrarAluno());
            break;
        case 3:
            if(sistema.getVectorProfessores().size() == 0 || sistema.getVectorAlunos().size()==0){
                cout<<"Impossivel cadastrar disciplina"<<endl;
            }else{
                sistema.cadastrarDisciplina(cadastrarDisciplina());
            }
            break;
        case 4:
            removerProfessor();
            break;
        case 5:
            removerAluno();
            break;
        case 6:
            removerDisciplina();
            break;
        case 7:
            menuImpressao();
            break;
        default:
            break;
        }
    }
    
}

int main(){
    srand(time(nullptr));    
    menu();

    return 0;
}