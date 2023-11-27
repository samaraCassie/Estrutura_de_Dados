#include "Grafo.h"
#include <iostream>

void mostrarMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1. Criar Grafo\n";
    std::cout << "2. Buscar Menor Caminho\n";
    std::cout << "3. Mostrar Grafo\n";
    std::cout << "4. Sair\n";
}

int main() {
    Grafo meuGrafo;
    bool sair = false;

    do {
        mostrarMenu();

        int opcao;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                int numVertices;
                std::cout << "Digite o número de vértices: ";
                std::cin >> numVertices;

                for (int i = 0; i < numVertices; ++i) {
                    meuGrafo.adicionarNo(i);
                }

                std::cout << "Grafo criado com sucesso!\n";
                break;
            }

            case 2: {
                if (meuGrafo.getMenorDistancia() == -1) {
                    std::cerr << "Erro: Grafo não criado ou pontos de início/destino não definidos.\n";
                    break;
                }

                int inicio, destino;
                std::cout << "Digite o ponto de início: ";
                std::cin >> inicio;

                std::cout << "Digite o ponto de destino: ";
                std::cin >> destino;

                meuGrafo.definirPontoInicio(inicio);
                meuGrafo.definirPontoDestino(destino);
                meuGrafo.dijkstra();

                std::cout << "A menor distância do ponto " << inicio << " para o ponto " << destino << " é: " << meuGrafo.getMenorDistancia() << "\n";
                break;
            }

            case 3: {
                meuGrafo.imprimirGrafo();
                break;
            }

            case 4:
                sair = true;
                break;

            default:
                std::cerr << "Opção inválida. Tente novamente.\n";
                break;
        }

    } while (!sair);

    return 0;
}

//C:\MinGW\bin\g++.exe -Wall -Wextra -g3 c:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra\Main.cpp c:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra\Main.cpp c:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra\Grafo.cpp -o c:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra\Grafo.cpp -o c:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra\output\Main.exec:\Users\sonia\Documents\GitHub\Estrutura_de_Dados\Grafos\Algoritmo_Dijkstra