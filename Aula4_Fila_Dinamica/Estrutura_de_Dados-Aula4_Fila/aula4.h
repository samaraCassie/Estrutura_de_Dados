#include <iostream>

using namespace std;

typedef int TipoItem;// se mudo aq o tipo do dado mudará no prog td

struct No
{
    TipoItem individuo;
    No* proximo;
};

class filaDinamica{
    private:
        No* inicio;
        No* fim;

    public:
    filaDinamica();
    ~filaDinamica();
    bool cheia();
    bool vazia();
    void inserir(TipoItem individuo);
    TipoItem remover();
    void imprimir();    
}; 