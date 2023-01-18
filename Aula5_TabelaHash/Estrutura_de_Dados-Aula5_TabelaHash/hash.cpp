#include <iostream>
#include <iomanip>
#include "hash.h"
using namespace std;
 
int Hash::funcaoHash(Aluno aluno)
{
    return (aluno.obterId() % max_posicoes);
}

Hash::Hash(int tam_vetor, int max)
{
    quant_itens = 0;
    max_itens = max;
    max_posicoes = tam_vetor;
    estrutura = new Aluno[tam_vetor];
}
Hash::~Hash()
{
    delete [] estrutura;
}
bool Hash::cheia()
{
    return (quant_itens == max_itens);
}
int Hash::tamanho()
{
    return (quant_itens);
}
void Hash::inserir(Aluno aluno)
{
    //ERRO: qnt de algarismos em Id
    int local = funcaoHash(aluno);
    bool teste = false;
    while (estrutura[local].obterId()){
        if (estrutura[local].obterId() == -1 || estrutura[local].obterId() == -2)
        {
            estrutura[local] = aluno;
            quant_itens++;
            teste = true;
            cout << "Aluno cadastrado com sucesso!\n\t__________________\n";
            break;
        }
        local = (local+1) % max_posicoes;
    }
    if (!teste)
    {
        cout << "Nao foi possivel realizar novo cadastro\n\t__________________\n";
    }  
}
void Hash::remover(Aluno aluno)
{
    int local = funcaoHash(aluno);
    char opcao;
    bool teste = false;
    while (estrutura[local].obterId() != -1){
        if(estrutura[local].obterId() == aluno.obterId()){
            cout << "\n\tCerteza que deseja remover esse cadatro?\n";
            cout << "\t[S] Sim\n\t[N] Nao\n\t";
            cin >> opcao;
            switch (opcao)
            {
                case 'S':
                case 's':
                    cout << "Cadastro de '" << estrutura[local].obterNome() << "' removido com sucesso!" << endl;
                    estrutura[local] = Aluno(-2, " ");
                    quant_itens--;
                    teste = true;
                    break;

                case 'N':
                case 'n':
                    teste = true;
                    cout << "Solicidacao de remocao de cadastro cancelada\n";
                    break;
                default:
                    cout << "ERROR";
                    break;
                
            }
        }
        local=(local+1)%max_posicoes;
    }
    if (!teste){
        cout << "Cadastro não encontrado.\nNao foi possivel realizar a remocao\n";
    }
}
void Hash::busca(Aluno& aluno, bool& busca)
{
    int local = funcaoHash(aluno);
    while (estrutura[local].obterId() != -1)
    {
        if (estrutura[local].obterId() == aluno.obterId()){
        busca = true;
        aluno = estrutura[local];
        cout << "\n*----------RESULTADO DE PESQUISA----------*\n\n";
        cout << setw(5) << "Id: " << aluno.obterId() << endl;
        cout << setw(5) << "Nome: " << aluno.obterNome() << endl;
        cout << "\n*----------******************----------*\n\n";
        break;
        }
        local = (local+1) % max_posicoes;
    }
    if (estrutura[local].obterId() == -1)
    {
        cout << "\n*----------NENHUM RESULTADO DE PESQUISA----------*\n\n";
    }
}
void Hash::imprimir()
{
    cout << "*----------Lista de Cadastros----------*\n\n";
    for (int i = 0; i < max_posicoes; i++)
    {
        if (estrutura[i].obterId() > 0)
        {
            //cout.width(10);
            //cout.fill(" ");
            cout << i << "| " << setw( 8 ) << estrutura[i].obterId();
            cout << "  " << estrutura[i].obterNome() << endl;
        }
    }
    cout << "\n*----------******************----------*\n\n";
}