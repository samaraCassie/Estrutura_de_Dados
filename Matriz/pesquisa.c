#include <stdio.h>
void main()
{
   char descricao[50], pesquisa[50];
   fflush(stdin);
   printf("descricao do produto..: ");
   gets(descricao);
   fflush(stdin);
   printf("substring de pesquisa.: ");
   gets(pesquisa);
   char* ret = strstr(descricao,pesquisa);
   if (ret==0) {
      printf("Nao corresponde\n");
   }
   else {
      printf("Corresponde\n");
      printf(" %s", descricao);
   }
}
