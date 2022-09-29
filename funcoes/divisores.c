#include <stdio.h>
#include <stdlib.h>

int divisores(int valor){
    int cont=0, primo=0;
    for (int i = 1; i <= valor; i++){
        if(valor%i==0)cont++;
    }
    if(cont==2)primo=1;
    return primo;
}

int main()
{
            /*Reaproveite o programa acima, elaborando um programa que contenha uma função que,
            usando o resultado da função definida na questão anterior, retorne 1 se o número for primo,
            0 se não for primo. Para determinar se o número é primo, é necessário saber quantos são os
            divisores ;)
            */
    int n, div;

    printf("Insira um valor inteiro:");
    scanf(" %d", &n);
    div=divisores(n);
    if(div==0){
        printf("~~~~ %d primo ~~~~",div);
    }else{
        printf("~~~~ %d nao primo ~~~~",div);
    }
    
    
}