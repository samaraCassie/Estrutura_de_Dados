#include <iostream>
#include "aula3.h"
#include <cstddef> // NULL
 
using namespace std;

    pilhaDinamica::pilhaDinamica()//construtura
    {
        topo = NULL;
    }

    pilhaDinamica::~pilhaDinamica()//desconstrutora  
    {
        No* tmp;
        while (topo != NULL)
        {
            tmp=topo;
            topo= topo->proximo;
            delete tmp;
        }
        
    }

    bool pilhaDinamica::cheia()//verificar se a pilha está cheia
    {
        No* novoNo;
        try
        {
            novoNo = new No;
            delete novoNo;
            return false;
        }
        catch(bad_alloc exception)
        {
            return true;
        }
    }

    bool pilhaDinamica::vazia()//verificar se a pilha está vazia
    {
        return (topo == NULL);// se a quantidade de pratos na pilha for 0, então é vd q a pilha está vazia. Retornar true
    }

    void pilhaDinamica::inserir(TipoItem prato)//push | Tipo de dado void pq não retorna valor, apena recebe. |
    {
        if (cheia())
        {
            cout << "A pilha de pratos está cheia\n";
            cout << "Nao e possivel por mais. Ha muito risco de queda\n";
        }
        else
        {
            No* novoNo;
            novoNo = new No;
            novoNo ->prato = prato;
            novoNo ->proximo = topo;
            topo = novoNo;
        }
    }

    TipoItem pilhaDinamica::remover()          //pop  | Tipo de dade int pq retorna o valor removido (q é int)|
    {
        if (vazia())
        {   
            cout << "Nao tem mais pratos para serem lavados!\n";
            cout << "Parabens pelo seu servico!!!\n\n";
            return 0; // tem que ter retorno por conta do TipoItem
        }
        else
        {
            No* temp;
            temp = topo;
            TipoItem item = topo->prato;
            topo = topo -> proximo;
            delete temp;
            return item;
        }
    }

    void pilhaDinamica::imprimir()             // De nv VOID por não retornar um valor
    {
        cout << "\nOs pratos para lavar são: \n[ ";
        No* tmp;
        tmp = topo;
        while (tmp != NULL)
        {
            cout << tmp->prato << " ";
            tmp = tmp->proximo;
        }
        cout << "]\n\n";
    }

    //int pilhaDinamica::TAM()
    //{return ---;}