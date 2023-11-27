#include "Grafo.h"
#include <iostream>
#include <queue>
#include <climits>

No::No(int v, int w) : vertice(v), peso(w) {}

Grafo::Grafo() : pontoInicio(-1), pontoDestino(-1) {}

void Grafo::adicionarNo(int vertice) {
    grafo.resize(vertice + 1);  // Garante que o vetor tenha espaço para o novo nó
}

void Grafo::adicionarAresta(int verticeOrigem, int verticeDestino, int peso) {
    grafo[verticeOrigem].insert(No(verticeDestino, peso));
}

void Grafo::definirPontoInicio(int inicio) {
    pontoInicio = inicio;
}

void Grafo::definirPontoDestino(int destino) {
    pontoDestino = destino;
}

void Grafo::dijkstra() {
    if (pontoInicio == -1 || pontoDestino == -1) {
        std::cerr << "Erro: Pontos de início e destino não definidos.\n";
        return;
    }

    int numVertices = grafo.size();
    distancia.assign(numVertices, INT_MAX);
    distancia[pontoInicio] = 0;

    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> filaPrioridade;
    filaPrioridade.push({0, pontoInicio});

    while (!filaPrioridade.empty()) {
        int u = filaPrioridade.top().second;
        filaPrioridade.pop();

        for (const No& vizinho : grafo[u]) {
            int v = vizinho.vertice;
            int peso = vizinho.peso;

            if (distancia[v] > distancia[u] + peso) {
                distancia[v] = distancia[u] + peso;
                filaPrioridade.push({distancia[v], v});
            }
        }
    }
}

int Grafo::getMenorDistancia() {
    return (pontoDestino != -1) ? distancia[pontoDestino] : -1;
}

void Grafo::imprimirGrafo() {
    std::cout << "\nGrafo:\n";
    for (int i = 0; i < grafo.size(); ++i) {
        std::cout << "Vértice " << i << ": ";
        for (const No& vizinho : grafo[i]) {
            std::cout << "(" << vizinho.vertice << ", " << vizinho.peso << ") ";
        }
        std::cout << "\n";
    }
}
