#include <iostream>
#include "aula5.cpp"
using namespace std;

class Hash{
    private:
    int funcaoHash(Aluno aluno);
    int max_itens;
    int max_posicoes;
    int quant_itens;
    Aluno* estrutura;

    public:
    Hash(int tam_vetor, int max);
    ~Hash();
    bool cheia();
    int tamanho();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void busca(Aluno& aluno, bool& busca);
    void imprimir();
};