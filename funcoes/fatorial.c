#include <stdio.h>
#include <stdlib.h>

int fatorial(int valor){
    int result=1;
    for (int i = 1; i <= valor; i++){
        result*=i;
    }
    return result;
}

int main(){
    /*Crie um programa em C que, através de uma função, calcule o fatorial de um número:
    O fatorial de um número é o produto de todos os inteiros de 1 até n, ou seja.:
    5! = 1 * 2 * 3 * 4 * 5 = 120*/

    int n, fat;
    printf("Fatorial de qual numero que vc quer descobrir?\n");
    scanf(" %d", &n);
    fat=fatorial(n);
    printf("O !%d eh %d", n, fat);

}