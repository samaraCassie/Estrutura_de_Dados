#include <stdio.h>
#include <stdlib.h>

      /*
      Faça um algoritmo/programa que leia vários
      valores entre 0 e 9 e armazene-os em uma 
      lista, até que o usuário digite um valor fora
      deste intervalo. Em seguida o programa deve 
      informar qual valor apareceu mais vezes nesta 
      contagem e quantas vezes ele apareceu.
      */

   int main()
{
    int tam=0, tam2=0, tam3=0, n=1, cont=0, repeticao=1;     
    int lista[9];
    int compara[9];
    int contador[9];

    while(n>=0 && n<=9){
    printf("Insira um valor: ");
    scanf("%d", &n);
    lista[tam]=n;
    tam++;
    }

    for(int i=0; i<tam; i++){
        compara[tam2] = lista[i];
        cont=0;
        for(int a=0; a<tam; a++){
            if(lista[a] == compara[tam2]){
            cont++;
                if(cont>repeticao){
                    contador[i]=lista[a];
                    tam3 = i;
                    repeticao = cont;
                }
            }
        }
        tam2++;
    }
   printf("%d repetiu %d vzs\n", contador[tam3], repeticao);
}
