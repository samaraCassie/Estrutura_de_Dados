#include <iostream>
#include "aula4.cpp"
#include <cstddef>

using namespace std;

int main()
{
    filaDinamica fila1; // Chama classe(pilha) e cria objeto(fila1)
    TipoItem individuo, inicio;
    int opcao;

    cout << "<----------Fila de Individuos em Espera---------->\n\n";

    do
    {
        cout << "\n[0] Abandonar a fila\n";
        cout << "[1] Adicionar mais um individuo para para esperar\n";
        cout << "[2] Remover individuo\n";
        cout << "[3] Ver quais sao os individuos em espera\n";
        cin >> opcao;

        if(opcao == 1)
        {
            cout << "\nQue individuo eh esse?\n";
            cin >> individuo;
            fila1.inserir(individuo);
        } else if (opcao == 2)
        { 
            TipoItem sai=fila1.remover();
            cout << "\nIndivuo removido: " << sai << endl;
            
        } else if (opcao == 3)
        {
            fila1.imprimir();
        } else if (opcao>4)
        {
            cout << "Opcao invalida\n";
            break;
        }
    } while (opcao != 0 && opcao <= 4);
}