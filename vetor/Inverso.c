#include <stdio.h>
#include <stdlib.h>
#define max 500
int main()
{
    /*
    Crie um algoritmo/programa que leia vários valores e armazene-os em uma lista. A entrada
    de dados deve ser encerrada quando o usuário fornecer o valor 0 (zero). Em seguida o
    programa deve mostrar a lista em ordem inversa
    */
    int n, i, tam=0, vetor[max];
    printf("\n|__________DIGITE [0] PARA ENCERRAR__________|\n");
    while (n!=0)
    {
        printf("Insira um valor: ");
        scanf("%d", &n);
        vetor[tam]=n;
        tam++;
    }
    tam--;
    printf("teste");
    for (i=tam; i>=0; i--)
    {
        printf("%3d", vetor[i]);
    }
    
    
}