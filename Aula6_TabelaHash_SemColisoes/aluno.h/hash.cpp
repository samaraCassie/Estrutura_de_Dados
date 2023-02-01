#include <iostream>
#include "hash.h"

using namespace std;

    int Hash::FuncaoHash(Aluno aluno)
    {
        return (aluno.obterRa() % max_posicoes);
    }