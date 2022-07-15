#include <iostream>
#include "aula2.h"

using namespace std;
 
    fila::fila()//construtura
    {
        ultimo = 0;
        primeiro = 0;
        vetor = new TipoItem[maxIndividuos];
    }

    fila::~fila()//desconstrutora  
    {
        delete [] vetor;
    }

    bool fila::cheia()//verificar se a fila está cheia
    {
        return (ultimo - primeiro == maxIndividuos); // [if] se a quantidade de pessoas for 100, então é vdd que a pilha esta cheia, Retornar true. [else] Retornar false
    }

    bool fila::vazia()//verificar se a fila está vazia
    {
        return (ultimo - primeiro == 0);// se a quantidade de individuos na fila for 0, então é vdd q está vazia. Retornar true
    }

    void fila::inserir(TipoItem individuo)//push | Tipo de dado void pq não retorna valor, apena recebe. |
    {
        if (cheia())
        {
            cout << "A fila esta cheia!!\n O individuo não pode ser adicionado\n\n";
        }
        else
        {
            vetor[ultimo] = individuo;
            ultimo++;
        }
    }

    TipoItem fila::remover()          //pop  | Tipo de dado int pq retorna o valor removido (q é int)|
    {
        if (vazia())
        {   
            cout << "Tem ninguem em espera!\n\t\\O/\n\n";
            return 0; // tem que ter retorno por conta do TipoItem
        }
        else
        { 
            primeiro++;
            return vetor[primeiro-1];
        }
    }

    void fila::imprimir()             // De nv VOID por não retornar um valor
    {
        cout << "\nOs indiciduo em espera sao: \n[ ";
        
        for (int i = primeiro; i < ultimo; i++)
        {
            cout << vetor[i] << " ";
        }
        cout << "]\n\n";
    }

    int fila::TAM()
    {
        return ultimo - primeiro;
    }