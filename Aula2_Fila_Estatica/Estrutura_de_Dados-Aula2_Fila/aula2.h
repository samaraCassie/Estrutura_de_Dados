#include <iostream>

using namespace std;
 
typedef int TipoItem;// se mudo aq o tipo do dado mudará no prog td
const int maxIndividuos = 5;// quantidade de pessoas que cabe na fila

class fila{
    private:// ACESSADO SÓ PELO PROG
    int primeiro, ultimo;
    TipoItem* vetor;


    public: // ACESSADO PELO USER 
    fila();//construtora
    ~fila();//desconstrutora  
    bool cheia();
    bool vazia();
    void inserir(TipoItem individuo); //push | Tipo de dado void pq não retorna valor, apena recebe. |
    TipoItem remover();                //pop  | Tipo de dado int pq retorna o valor removido (q é int)|
    void imprimir();                   //pint | De nv VOID por não retornar um valor
    int TAM();                         //     |Retorna a quantia de pratos que tem na pilha

};
