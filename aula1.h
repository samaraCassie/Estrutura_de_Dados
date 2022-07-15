#include <iostream>
 
using namespace std;

typedef int TipoItem;// se mudo aq o tipo do dado mudará no prog td
const int maxItens = 100;// quantidade de pratos que cabe na pilha

class pilha{
    private:// ACESSADO SÓ PELO PROG
    int tamanho;
    TipoItem* vetor;


    public: // ACESSADO PELO USER 
    pilha();//construtora
    ~pilha();//desconstrutora  
    bool cheia();
    bool vazia();
    void inserir(TipoItem item); //push | Tipo de dado void pq não retorna valor, apena recebe. |
    TipoItem remover();          //pop  | Tipo de dado int pq retorna o valor removido (q é int)|
    void imprimir();             //pint | De nv VOID por não retornar um valor
    int TAM();                   //     |Retorna a quantia de pratos que tem na pilha

};
