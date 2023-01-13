#include <iostream>
#include "aula1.cpp"
 
using namespace std;

int main()
{
    pilha pilha1; // Chama classe(pilha) e cria objeto(pilha1)
    TipoItem prato;
    int opcao, tamanho;

    cout << "<----------Vamos Lavar os Pratos---------->\n\n";

    do
    {
        cout << "\n[0] Abandonar a pia\n";
        cout << "[1] Colocar prato sujo para lavar\n";
        cout << "[2] Lavar prato\n";
        cout << "[3] Ver quais são os pratos sujos\n"; // Tentar criar uma pilha para os pratos limpos
        cout << "[4] Ver quanto que resta para acabar o trampo\n";
        cin >> opcao;

        if(opcao == 1)
        {
            cout << "\nQue prato eh esse?\n";
            cin >> prato;
            pilha1.inserir(prato);
        } else if (opcao == 2)
        {
            prato = pilha1.remover();
            if (prato != 0)
            {
                cout << "\nPrato lavado: " << prato << endl;
            }else
            {
                cout << " ";
            }
            
        } else if (opcao == 3)
        {
            pilha1.imprimir();
        } else if (opcao == 4)
        {
            tamanho = pilha1.TAM();
            if (tamanho != 0)
            {
                cout << "Restam " << tamanho << " pratos!!\n\n";
            } else
            {
                cout << "Nao tem mais pratos para serem lavados!!";
                cout << "Pode comemorar!\n \\O/\n\n";
            }
        }
    } while (opcao != 0 && opcao <= 4);
}