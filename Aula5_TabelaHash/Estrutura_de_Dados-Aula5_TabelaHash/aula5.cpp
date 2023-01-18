#include <iostream>
#include "aula5.h"
using namespace std;

Aluno::Aluno()
{
    id = -1;
    nome = " ";
}
Aluno::Aluno(int i, string n) 
{
    id = i;
    nome = n;
}
int Aluno::obterId()
{
    return id;
}
string Aluno::obterNome()
{
    return nome;
}
