#include <iostream>
#include "aula3.cpp"

using namespace std;
 
int main()
{
    pilhaDinamica pilha1; // Chama classe(pilha) e cria objeto(pilha1)
    TipoItem prato;
    int opcao, tamanho=0; 

    cout << "<----------Vamos Lavar os Pratos---------->\n\n";

    do
    {
        cout << "\n[0] Abandonar a pia\n";
        cout << "[1] Colocar prato sujo para lavar\n";
        cout << "[2] Lavar prato\n";
        cout << "[3] Ver quais sao os pratos sujos\n"; // Tentar criar uma pilha para os pratos limpos
        cin >> opcao;

        if(opcao == 1)
        {
            cout << "\nQue prato eh esse?\n";
            cin >> prato;
            pilha1.inserir(prato);
            tamanho++;
        } else if (opcao == 2)
        {
            prato = pilha1.remover();
            if (prato != 0)
            {
                cout << "\nPrato lavado: " << prato << endl;
                tamanho--;
            }else
            {
                cout << "Erro";
            }
        } else if (opcao == 3)
        {
            pilha1.imprimir();
        }
    } while (opcao != 0 && opcao < 4);
}