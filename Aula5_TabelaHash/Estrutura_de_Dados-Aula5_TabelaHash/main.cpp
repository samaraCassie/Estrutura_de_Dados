#include <iostream>
#include "hash.cpp"
#include "correcaoDeErros.c"
using namespace std;

int main()
{
    int tam_vetor, max, opcao, id;
    
    string nome;
    bool busca;

    cout << "TABELA HASH\n\n";
    cout << "Insira o tamanho da Hash: ";
    cin >> tam_vetor;
    cout << "\nInsira o numero maximo de elemnetos!\n";
    cin >> max;
    cout << "O fator de carga de elementos eh: " << (float)max / (float)tam_vetor << endl;
    Hash alunoHash(tam_vetor, max);
    
    do
    {
        cout << "\n[0] Encerrar sessao\n";
        cout << "[1] Cadastrar aluno\n";
        cout << "[2] Remover aluno\n";
        cout << "[3] Ver lista de cadastros\n";
        cout << "[4] Buscar\n";
        cin >> opcao;
        //opcao=AnaliseDado(opcao);

        if (opcao == 1)
        {
            cout << "Id do aluno: ";
            cin >> id;
            //id=AnaliseDado(id);
            cout << "\nNome do aluno: ";
            cin >> nome;
            Aluno aluno(id, nome);
            alunoHash.inserir(aluno);
        } else if (opcao == 2)
        {
            cout << "Id do aluno: ";
            cin >> id;
            //id=AnaliseDado(id);
            Aluno aluno(id, " ");
            //cout << "Certeza que deseja remover esse cadastro?"
            alunoHash.remover(aluno);
            
        }else if (opcao == 3)
        {
            alunoHash.imprimir();
            
        } else if (opcao == 4)
        {
            cout << "Id do aluno: ";
            cin >> id;
            //id=AnaliseDado(id);
            Aluno aluno(id, " ");
            alunoHash.busca(aluno, busca);
        } //else if (opcao)
        //{
            /* code */
        //}
    } while (opcao != 0);
}