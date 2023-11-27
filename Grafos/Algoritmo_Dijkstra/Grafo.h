#ifndef GRAFO_H
#define GRAFO_H

#include <vector>
#include <set>

struct No {
    int vertice;
    int peso;

    No(int v, int w);
};

class Grafo {
public:
    Grafo();
    void adicionarNo(int vertice);
    void adicionarAresta(int verticeOrigem, int verticeDestino, int peso);
    void definirPontoInicio(int inicio);
    void definirPontoDestino(int destino);
    void imprimirGrafo();
    void dijkstra();
    int getMenorDistancia();

private:
    std::vector<std::set<No>> grafo;
    std::vector<int> distancia;
    int pontoInicio;
    int pontoDestino;
};

#endif // GRAFO_H
