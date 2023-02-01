#include <iostream>
#include "hash.h"

using namespace std;

    int Hash::FuncaoHash(Aluno aluno)
    {
        return (aluno.obterRa() % max_posicoes);
    }
    Hash::Hash(int tam_vetor, int max)
    {
        quant_itens = 0;
        max_itens = max;
        max_posicoes = tam_vetor;
        estrutura = new Aluno[tam_vetor];
    }