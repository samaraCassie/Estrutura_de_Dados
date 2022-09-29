#include <stdlib.h>
#include <stdio.h>

int main()
{
int i = 0, vet[100];
int tam=0,num;
int busca = 0;

    while(num!=0){
    printf("digite os numeros que deseja:");
    scanf("%d", &num);
    vet[tam]=num;
    tam++;
    }
    printf("qual numero deseja buscar:");
    scanf("%d", &num);
    for(i=0; i<= tam; i++){
        if (num==vet[i]){
            printf("seu numero esta no vetor:");
            printf("Posicao: %d", i);
            busca = 1;
        }
    }
    if (busca==0)
    {
        printf("Não foi encontrado");
    }
}