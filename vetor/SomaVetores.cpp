#include <iostream>
 
using namespace std;
#define max 2
int main()
{
    /*
    NOVO Crie um programa que leia 10 valores e armazene-os em 2 vetores de 5 elementos
    cada. Em seguida o programa deve apresentar o vetor soma, conforme o exemplo:
    Obs.: Para os dados ficarem alinhados, use uma largura fixa no printf com o formato "%3d"
    */
    int i, n, vetor1[max], vetor2[max], soma[max];

    for (i = 0; i < max; i++)
    {
        cout << "\nDigite um valor: ";
        cin >> n;
        vetor1[i] = n;
    }    
    for (i = 0; i < max; i++)
    {
        cout << "\nDigite um valor: ";
        cin >> n;
        vetor2[i] = n;
    }
    for (i = 0; i < max; i++)
    {
        soma[i]=vetor1[i]+vetor2[i];
    }
    
    cout <<"\nVetor 1: ";
    for ( i = 0; i < max; i++)
    {
        cout << " " << vetor1[i];
    }
    cout << "\nVetor 2: ";
    for (i = 0; i < max; i++)
    {
        cout << " " << vetor2[i]; 
    }
    cout << "\nSoma...: ";
    for( i = 0; i < max; i++)
    {
        cout << " " << soma[i];
    }
    
}
