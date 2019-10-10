#include <string>
#include <iostream>
#include <vector>
#include "Curso.hpp"
#include "Aluno.hpp"
using namespace std;
Curso initCurso(){
    string nome,disciplina;
    vector<string> listDisc;
    int duracao,esc;
    cout<<"Digite o nome do curso"<<endl;
    getline(cin,nome);
    cout<<"Digite o nome da duracao do curso"<<endl;
    cin>>duracao;
    cout<<"Deseja cadastrar uma disciplina?"<<endl;
    cout<<"1.Sim\n2.Nao"<<endl;
    cin>>esc;
    while (esc == 1)
    {
        cout<<"Digite o nome da disciplina"<<endl;
        cin.ignore();
        //cin.clear();
        getline(cin,disciplina);
        listDisc.push_back(disciplina);
        cout<<"Deseja continuar cadastrando disciplinas?"<<endl;
        cout<<"1.Sim\n2.Nao"<<endl;
        cin>>esc;
    }
    Curso curso = Curso(nome,duracao,listDisc);
    return curso;
}
Aluno cadastrarAluno(){
    string nome;
    int dia,mes,ano;
    string endereco;
    cout<<"Digite o nome do aluno"<<endl;
    cin.ignore();
    getline(cin,nome);
    cout<<"Digite o endereco do aluno"<<endl;
    getline(cin,endereco);
    cout<<"Entre com a data de nascimento do aluno separada por espaco(dd mm aaaa)"<<endl;
    cin>>dia>>mes>>ano;
    Aluno aluno = Aluno(nome,endereco,dia,mes,ano);
    return aluno;

}
int main(){
    Curso curso = initCurso();
    curso.addAluno(cadastrarAluno());
    curso.mostrarAlunos();
    curso.mostrarDisciplinas();
    return 0;
}