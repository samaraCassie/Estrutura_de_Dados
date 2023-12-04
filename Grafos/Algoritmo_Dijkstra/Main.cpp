#include <iostream>
#include "grafo.h"

using namespace std;

int main(){
    int max, valorarestanula;
    cout << "Digite a quantidade maxima de vertices:\n";
    cin >> max;
    cout << "Digite o valor para representar a ausencia de aresta:\n";
    cin >> valorarestanula;
    Grafo grafo1(max, valorarestanula);
    TipoItem item1, item2;
    int opcao, valor, peso;

    do{
        cout << "\n\n-----------MENU-----------\n\n"
        cout << "[0] parar o algoritmo!\n";
        cout << "[1] inserir um vertice!\n";
        cout << "[2] inserir uma aresta!\n";
        cout << "[3] imprimir o grau de um vertice!\n";
        cout << "[4] imprimir o peso de uma aresta!\n";
        cout << "[5] imprimir a matriz de adjacencias!\n";
        cout << "[6] imprimir a lista de vertices!\n";
        cout << "--------------------------------\n\n"
        cin >> opcao;

        if (opcao == 1){
            cout << "Digite o elemento do vertice que sera inserido:\n";
            cin >> item1;
            grafo1.inserevertice(item1);
        } else if (opcao == 2){
            cout << "Digite o vertice de saida:\n";
            cin >> item1;
            cout << "Digite o vertice de entrada:\n";
            cin >> item2;
            cout << "Digite o peso desta aresta:\n";
            cin >> peso;
            grafo1.inserearesta(item1, item2, peso);
        } else if (opcao == 3){
            cout << "Digite o vertice que sera calculado o grau:\n";
            cin >> item1;
            valor = grafo1.obtergrau(item1);
            cout << "O grau desse vertice e: " << valor << endl;
        } else if (opcao == 4){
            cout << "Digite o vertice de saida:\n";
            cin >> item1;
            cout << "Digite o vertice de entrada:\n";
            cin >> item2;
            valor = grafo1.obterpeso(item1, item2);
            cout << "O peso dessa aresta e: " << valor << endl;
        } else if (opcao == 5){
            grafo1.imprimirmatriz();
        } else if (opcao == 6){
            grafo1.imprimirvertices();
        }
    } while (opcao != 0);


    return 0;
} 