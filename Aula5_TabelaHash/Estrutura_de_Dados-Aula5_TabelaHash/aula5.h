#include <iostream>
using namespace std;

class Aluno
{
    private:
        int id;
        string nome;

    public:
        Aluno();
        Aluno(int i, string n);
        int obterId();
        string obterNome();
};
 