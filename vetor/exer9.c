#include <stdlib.h>
#include <stdio.h>

int main()
{
/*
Faça um algoritmo/programa que leia vários valores e armazene-os em uma lista até que o
usuário digite um valor negativo. Em seguida o programa deve informar:
• O maior número, o menor número, o valor médio
• Quantos números são menores que a média e em percentual
• Quantos números são maiores que a média e em percentual
*/

int num, vet[50], tam = 0, i, maior=0, menor, soma;

do{
    printf("Digite os valores:");
    scanf("%d", &num);
    vet[tam] = num;
    soma+=num;
    tam++;
}while (num>0);

soma/=tam;
printf
for(i=0; i<tam; i++){
    if(num>maior)maior=num;
    if(num<menor)menor=num;
}
}