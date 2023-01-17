#include <iostream>
#include "aula4.h"
#include <cstddef>
#include <new> 
 
using namespace std;

 filaDinamica::filaDinamica()//construtura
    {
        inicio = NULL;
        fim = NULL;
    }

    filaDinamica::~filaDinamica()//desconstrutora  
    {
        No* tmp;
        while (inicio != NULL)
        {
            tmp=inicio;
            inicio=inicio->proximo;
            delete tmp;
        }
        
    }

    bool filaDinamica::cheia()//verificar se a fila está cheia
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

    bool filaDinamica::vazia()//verificar se a fila está vazia
    {
        return (inicio == NULL);// se a quantidade de individuos na fila for 0, então é vd q a pilha está vazia. Retornar true
    }

    void filaDinamica::inserir(TipoItem individuo)//push | Tipo de dado void pq não retorna valor, apena recebe. |
    {
        if (cheia())
        {
            cout << "A fila de individuos está cheia\n";
            cout << "Nao e possivel adicionar mais\n";
        }
        else
        {
            No* novoNo;
            novoNo = new No;
            novoNo ->individuo = individuo;
            novoNo ->proximo = NULL;
            if (inicio == NULL)
            {
                inicio = novoNo;
            } else{
                fim->proximo = novoNo;
            }
            fim = novoNo;
        }
    }

    TipoItem filaDinamica::remover()          //pop  | Tipo de dade int pq retorna o valor removido (q é int)|
    {
        if (vazia())
        {   
            cout << "Nao tem mais individuos em espera!\n";
            return 0; // tem que ter retorno por conta do TipoItem
        }
        else
        {
            No* tmp;
            tmp = inicio;
            TipoItem sai = inicio->individuo;
            inicio = inicio -> proximo;
            if (inicio == NULL)
            {
                fim=NULL;
            }
            delete tmp;
            return sai;
        }
        
    }

    void filaDinamica::imprimir()             // De nv VOID por não retornar um valor
    {
        cout << "\nOs individuos em espera sao: \n[ ";
        No* tmp;
        tmp = inicio;
        while (tmp != NULL)
        {
            cout << tmp->individuo << " ";
            tmp = tmp->proximo;
        }
        cout << "]\n\n";
    }
