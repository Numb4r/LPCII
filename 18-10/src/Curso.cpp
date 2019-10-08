#include "Curso.hpp"
void Curso::setNome(string nome){
    this->nome = nome;
}
string Curso::getNome(){
    return nome;
}
void Curso::cadastrarProfessor(){
    string nome,endereco,titulacao,curso, escTitulo;
    cout<<"Entre com o nome do professor"<<endl;
    getline(cin,nome);
    cout<<"Entre com o endereco do professor"<<endl;
    getline(cin,endereco);
    cout<<"Entre com os titulos do professor"<<endl;
    cout<<"0.Sem titulo\n1.Tecnólogo\n2.Bacharelado\n3.Licenciatura\n4.Mestrado\n5.Doutorado"<<endl;
    getline(cin,escTitulo);
    if (escTitulo.find("0") == string::npos)
    {
        if (escTitulo.find("1") != string::npos)
            titulacao+="Tecnólogo/";
        if (escTitulo.find("2") != string::npos)
            titulacao+="Bacharelado/";

        if (escTitulo.find("3") != string::npos)
            titulacao+="Licenciatura/";

        if (escTitulo.find("4") != string::npos)
            titulacao+="Mestrado/";

        if (escTitulo.find("5") != string::npos)
            titulacao+="Doutorado";
         if (titulacao.back()=='/')
        {
            titulacao.erase(titulacao.size()-1);
        }
    }else{
        titulacao = "Sem Titulo";
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
    string nome;
    int ch,escProfessor = -2;
    cout<<"Entre com o nome da disciplina"<<endl;
    getline(cin,nome);
    cout<<"Entre com a carga horaria da disciplina"<<endl;
    cin.ignore();
    cin>>ch;
    if (!this->professores.empty())
    {
        cout<<"Entre com o numero do professor que deseja adicionar"<<endl;
        cout<<"(Entre com -1 para deixar em branco"<<endl;
        for (long unsigned int i = 0; i < this->professores.size(); i++)
        {
            cout<<i+1<<". "<<professores.at(i).getNome()<<endl;
        }
        while (escProfessor < -1 || escProfessor > (int)(professores.size()+1))
        {
            cin>>escProfessor;
        }
    }
    if (escProfessor == -1 || professores.size()==0)
    {
        Disciplina disciplina = Disciplina(nome,ch);
        this->disciplinas.push_back(disciplina);
    }else{
        Disciplina disciplina = Disciplina(nome,ch,professores.at(escProfessor-1));
        this->disciplinas.push_back(disciplina);
    }   
}
void Curso::imprimirListaDeProfessores(){
  if (!this->professores.empty())
  {
        for (long unsigned int i = 0; i < this->professores.size(); i++)
        {
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Nome: "<<professores.at(i).getNome()<<endl;
            cout<<"Endereco: "<<professores.at(i).getEndereco()<<endl;
            cout<<"Curso: "<<professores.at(i).getCurso()<<endl;
            cout<<"Titulacao: "<<professores.at(i).getTitulacao()<<endl;
        }
        cout<<"--------------------------------------------------"<<endl;
  }else{
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Ainda nao foi cadastrado nenhum professor"<<endl;
        cout<<"--------------------------------------------------"<<endl;
  }
  
}
void Curso::imprimirListaDeAlunos(){
    if (!this->alunos.empty())
    {
        for (long unsigned int i = 0; i < this->alunos.size(); i++)
        {
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Matricula: "<<alunos.at(i).getMatricula()<<endl;
            cout<<"Nome: "<<alunos.at(i).getNome()<<endl;
            cout<<"Endereco: "<<alunos.at(i).getEndereco()<<endl;
        }
        cout<<"--------------------------------------------------"<<endl;
    }else{
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Ainda nao foi cadastrado nenhum aluno"<<endl;
        cout<<"--------------------------------------------------"<<endl;

    }
}
void Curso::imprimirListaDeDisciplinas(){
    if (!this->disciplinas.empty())
    {
        for (long unsigned int i = 0; i < this->disciplinas.size(); i++)
        {
            cout<<"--------------------------------------------------"<<endl;
            cout<<"Nome: "<<disciplinas.at(i).getNome()<<endl;
            cout<<"Carga Horaria: "<<disciplinas.at(i).getCH()<<endl;
            cout<<"Professor: "<<disciplinas.at(i).getProfessor().getNome()<<endl;
        }
        cout<<"--------------------------------------------------"<<endl;
    }else{
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Ainda nao foi cadastrada nenhuma disciplina"<<endl;
        cout<<"--------------------------------------------------"<<endl;
    }
}