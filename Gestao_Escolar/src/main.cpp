#include <iostream>
#include <cstdlib>
#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "System.hpp"
using namespace std;

System init(){
    string nome,endereco;
    cout<<"\tConfiguracoes iniciais"<<endl;
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
    cout<<"\t\tCadastro de Aluno"<<endl;
    cout<<"\nNome: ";
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
    cout<<"\t\tCadastro de Professor"<<endl;
    cout<<"\nNome: ";
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
    cout<<"\nNome da disciplina: ";
    getline(cin,nome);
    Disciplina disciplina = Disciplina(nome,codigo);
    sistema.imprimirProfessores(true);
    while (true)
    {
        cout<<"\nEntre com o professor da materia: ";
        cin>>id;
        if (id < sistema.getVectorProfessores().size()) break;
    }
    disciplina.setProfessor(sistema.getProfessorByIdReference(id));
    
    while (true)
    {
        if (sistema.getVectorAlunos().size()>0)
        {
            cout<<"Deseja acrescentar um aluno?"<<endl;
            cout<<"1.Sim\n2.Nao"<<endl;
            cin>>id;    
            if(id!=1)break;
            sistema.imprimirAlunos(true);
            while (true)
            {
                cout<<"\n\nEntre com o aluno: ";
                cin>>id;
                if(id<sistema.getVectorAlunos().size())break;
                
            }
            disciplina.cadastrarAluno(sistema.getAlunoByIdReference(id));
        }break;
    }
    
    
    return disciplina;
}
void menuCadastro(){
    int op = 0;
    cout<<"\n\n\t\tMenu\tCadastro\n"<<endl;
    cout<<"\n\n1.Cadastrar Aluno"<<endl;
    cout<<"2.Cadastrar Professor"<<endl;
    cout<<"3.Cadastrar Disciplina"<<endl;
    cout<<"~>";
    cin>>op;
    switch (op)
    {
    case 1:
        sistema.cadastrarAluno(cadastrarAluno());
        break;
    case 2:
        sistema.cadastrarProfessor(cadastrarProfessor());
        break;
    case 3:
        if(sistema.getVectorProfessores().size() == 0 || sistema.getVectorAlunos().size()==0){
            cout<<"Impossivel cadastrar disciplina"<<endl;
        }else{
            sistema.cadastrarDisciplina(cadastrarDisciplina());
        }
        break;
    default:
        break;
    }
}
//=====================================================================================================
//              Funcoes de remocao
//=====================================================================================================-

void removerAluno(){
    if (sistema.getVectorAlunos().size() == 0)
    {
        cout<<"\n\nNenhum aluno cadastrado!"<<endl;
    }
    else
    {
        unsigned long int id = 0;
        cout<<"\t\tRemocao de Aluno"<<endl;
        sistema.imprimirAlunos(true);
        while (true)
        {
            cout<<"\n\n-1 para cancelar"<<endl;
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
    
}

void removerProfessor(){
    if (sistema.getVectorProfessores().size() == 0)
    {
        cout << "\n\nNenhum professor cadastrado!"<<endl;
    }else{
        unsigned long int id = 0;
        cout<<"\t\tRemocao de Professor"<<endl;
        sistema.imprimirProfessores(true);
        while (true)
        {
            cout<<"\n\n-1 para cancelar"<<endl;
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
}

void removerDisciplina(){
    if (sistema.getVectorDisciplina().size() == 0)
    {
        cout << "\n\nNenhuma disciplina cadastrada!"<<endl;
    }
    else
    {
        unsigned long int id = 0;
        cout<<"\t\tRemocao de Disciplina"<<endl;
        sistema.imprimirDisciplinas(true);
        while (true)
        {
            cout<<"\n\n-1 para cancelar"<<endl;
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
    
}
void menuRemocao(){
    int op = 0;
    cout<<"\n\n\t\tMenu\tRemocao\n"<<endl;
    cout<<"\n\n1.Remover Aluno"<<endl;
    cout<<"2.Remover professor"<<endl;
    cout<<"3.Remover Disciplina"<<endl;
    cout<<"~>";
    cin>>op;
    switch (op)
    {
    case 1:
        removerAluno();
        break;
    case 2:
        removerProfessor();
        break;
    case 3:
        removerDisciplina();
        break;
    default:
        break;
    }
}
//=====================================================================================================
//              Funcoes de Impressao
//=====================================================================================================-
void menuImpressao(){
    int op = 0;
    cout<<"\n\n\t\tMenu\tImpressao\n"<<endl;
    cout<<"\n\n1.Imprimir todos os alunos"<<endl;
    cout<<"2.Imprimir todos os professores"<<endl;
    cout<<"3.Imprimir todas as disciplinas"<<endl;
    cout<<"~>";
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
void GUI(){
    cout<<"\n\n\t\tMenu\n"<<endl;
    cout<<"1.Menu Cadastro"<<endl;
    cout<<"2.Menu Remocao"<<endl;
    cout<<"3.Menu Impressao"<<endl;
    cout<<"0.Sair"<<endl;
    cout<<"~>";
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
            menuCadastro();
            break;
        case 2:
            menuRemocao();
            break;
        case 3:
            menuImpressao();
            break;
        default:
            break;
        }
    }
    
}

int main(){
    sistema.cadastrarAluno(Aluno("1",3,"Yuri","cu","00","@","312312",0,'M'));
    sistema.cadastrarProfessor(Professor("cu","co","L","dd","dd","@","dasda",3,'F'));
    srand(time(nullptr));    
    menu();

    return 0;
}