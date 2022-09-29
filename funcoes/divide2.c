#include <stdlib.h>
#include <stdio.h>

int divide(int valor){
    int cont=0;
    while (valor>0){
        valor/=2;
        cont++;
    }
    return cont;
    
}

int main()
{
    int n, qnt;

    printf("Insira um valor inteiro ");
    scanf("%d", &n);
    qnt=divide(n);
    printf("\n %d", qnt);
    printf(" divisoes");
}