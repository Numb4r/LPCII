#include <iostream>
#include "Curso.hpp"
using namespace std;
int main(){
    Curso curso;
    curso.cadastrarAluno();
    curso.cadastrarProfessor();
    curso.cadastrarDisciplina();
    curso.imprimirListaDeAlunos();
    curso.imprimirListaDeDisciplinas();
    curso.imprimirListaDeProfessores();
    return 0;
}