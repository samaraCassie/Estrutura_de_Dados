#include <iostream>

using namespace std;
 
typedef int TipoItem;// se mudo aq o tipo do dado mudará no prog td

struct No{
    TipoItem prato;
    No* proximo;
};

class pilhaDinamica{
    private:// ACESSADO SÓ PELO PROG
    No* topo;

    public: // ACESSADO PELO USER 
    pilhaDinamica();//construtora
    ~pilhaDinamica();//desconstrutora  
    bool cheia();
    bool vazia();
    void inserir(TipoItem item); //push | Tipo de dado void pq não retorna valor, apena recebe. |
    TipoItem remover();          //pop  | Tipo de dado int pq retorna o valor removido (q é int)|
    void imprimir();             //pint | De nv VOID por não retornar um valor
    //int TAM(); Ainda não sei fazer isso com lista encadeada                //     |Retorna a quantia de pratos que tem na pilha
};
    
