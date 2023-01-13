#include <iostream>
#include "aula1.h"
 
using namespace std;

    pilha::pilha()//construtura
    {
        tamanho = 0;
        vetor = new TipoItem[maxItens];
    }

    pilha::~pilha()//desconstrutora  
    {
        delete [] vetor;
    }

    bool pilha::cheia()//verificar se a pilha está cheia
    {
        return (tamanho == maxItens); // [if] se a quantidade de pratos for 100, então é vdd que a pilha esta cheia. Retornar true [else] Retornar false
    }

    bool pilha::vazia()//verificar se a pilha está vazia
    {
        return (tamanho == 0);// se a quantidade de pratos na pilha for 0, então é vd q a pilha está vazia. Retornar true
    }

    void pilha::inserir(TipoItem prato)//push | Tipo de dado void pq não retorna valor, apena recebe. |
    {
        if (cheia())
        {
            cout << "A pilha de pratos está cheia\n";
            cout << "Nao e possivel por mais. Ha muito risco de queda\n";
        }
        else
        {
            vetor[tamanho] = prato;
            tamanho++;
        }
    }

    TipoItem pilha::remover()          //pop  | Tipo de dade int pq retorna o valor removido (q é int)|
    {
        if (vazia())
        {   
            cout << "Nao tem mais pratos para serem lavados!\n";
            cout << "Parabens pelo seu servico!!!\n\n";
            return 0; // tem que ter retorno por conta do TipoItem
        }
        else
        {
            tamanho--;
            return vetor[tamanho];
        }
    }

    void pilha::imprimir()             // De nv VOID por não retornar um valor
    {
        cout << "\nOs pratos para lavar são: \n[ ";
        for (int i = 0; i < tamanho; i++)
        {
            cout << vetor[i] << " ";
        }
        cout << "]\n\n";
    }

    int pilha::TAM()
    {
        return tamanho;
    }