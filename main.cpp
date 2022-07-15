#include <iostream>
#include "aula2.cpp"

using namespace std;

int main()
{
    fila fila1; // Chama classe(pilha) e cria objeto(fila1)
    TipoItem individuo, ultimo;
    int opcao;

    cout << "<----------Fila de Individuos em Espera---------->\n\n";

    do
    {
        cout << "\n[0] Abandonar a fila\n";
        cout << "[1] Adicionar mais um individuo para para esperar\n";
        cout << "[2] Remover individuo\n";
        cout << "[3] Ver quais são os individuos em espera\n";
        cout << "[4] Consultar quantos que restam na fila\n";
        cin >> opcao;

        if(opcao == 1)
        {
            cout << "\nQue individuo eh esse?\n";
            cin >> individuo;
            fila1.inserir(individuo);
        } else if (opcao == 2)
        {
            ultimo = fila1.remover();
            if (ultimo != 0)
            {
                cout << "\nIndivuo removido: " << ultimo << endl;
            }else
            {
                cout << " ";
            }
        } else if (opcao == 3)
        {
            fila1.imprimir();
        } else if (opcao == 4)
        {
            ultimo = fila1.TAM();
            if (ultimo != 0)
            {
                cout << "Restam " << ultimo << " individuos!!\n\n";
            } else
            {
                cout << "Tem ninguem em espera!\n";
                cout << "\\O/\n\n";
            }
        } else if (opcao>4)
        {
            cout << "Opcao invalida\n";
        }
    } while (opcao != 0 && opcao <= 4);
}