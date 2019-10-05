#include "Curso.hpp"
void Curso::setNome(string nome){
    this->nome = nome;
}
string Curso::getNome(){
    return nome;
}
void Curso::cadastrarProfessor(){
    string nome,endereco,titulacao,curso, escTitulo;
    bool titulos[5];
    cout<<"Entre com o nome do professor"<<endl;
    getline(cin,nome);
    cout<<"Entre com o endereco do professor"<<endl;
    getline(cin,endereco);
    cout<<"Entre com os titulos do professor"<<endl;
    cout<<"0.Sem titulo\n1.Tecnólogo\n2.Bacharelado\n3.Licenciatura\n4.Mestrado\n5.Doutorado"<<endl;
    getline(cin,escTitulo);
    for (int i = 0; i < escTitulo.size(); i++)
        if (!titulos[(int)escTitulo.at(i)])
            titulos[(int)escTitulo.at(i)];
    if (!titulos[0])
    {
        for (int i = 1; i < 5; i++)
        {
            if (titulos[i])
            {
                switch (i)
                {
                case 1:
                    titulacao+="Tecnólogo/";
                    break;
                case 2:
                    titulacao+="Bacharelado/";
                    break;
                case 3:
                    titulacao+="Licenciatura/";
                    break;
                case 4:
                    titulacao+="Mestrado/";
                    break;
                case 5:
                    titulacao+="Doutorado";
                    break;
                }
            }
        }
        if (titulacao.back()=='/')
        {
            titulacao.erase(titulacao.back());
        }
    }else{
        titulacao="Sem Titulos";
    }
    cout<<"Entre com o curso do professor"<<endl;
    getline(cin,curso);
    Professor professor = Professor(titulacao,curso,nome,endereco) ;
    this->professores.push_back(professor);
}
void Curso::cadastrarAluno(){
    string nome,endereco;
    int matricula;
    cout <<"Entre com o nome do aluno"<<endl;
    getline(cin,nome);
    cout<<"Entre com o endereco do aluno"<<endl;
    getline(cin,endereco);
    cout<<"Entre com o numero de matricula do aluno"<<endl;
    cin>>matricula;
    Aluno aluno = Aluno(matricula,nome,endereco);
    this->alunos.push_back(aluno);
}
void Curso::cadastrarDisciplina(){

}
void Curso::imprimirListaDeProfessores(){

}
void Curso::imprimirListaDeAlunos(){

}
void Curso::imprimirListaDeDisciplinas(){

}