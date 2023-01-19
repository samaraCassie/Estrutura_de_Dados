#include <stdio.h>
#include <string.h>
    

typedef struct{
    int idProduto;
    char descProduto[50];
    int quantidade;
    float valorUnit;
} Produto;

int cont=0;
float total;
Produto vetor[20];

void menu(){
    printf("\t\t[1] incluir produto\n");
    printf("\t\t[2] mostrar produtos\n");
    printf("\t\t[3] pesquisar produtos\n");
    printf("\t\t[9] sair\n");
}

void pushProduto(){
    printf("Insira o ID: ");
    scanf(" %d", &vetor[cont].idProduto);

    while(vetor[cont].idProduto != 0){
    fflush(stdin);

    printf("Produto: ");
    gets(vetor[cont].descProduto);

    printf("Valor da unidade: ");
    scanf(" %f", &vetor[cont].valorUnit);

    fflush(stdin);
    printf("Quantidade: ");
    scanf(" %d", &vetor[cont].quantidade);
    printf("\n+---------------------------------------+\n\n");

    total+=(vetor[cont].valorUnit*vetor[cont].quantidade);
    cont++;

    printf("Insira o ID: ");
    scanf("%d", &vetor[cont].idProduto);
    }
}

void pesquisar(){
    char pesquisa[50];
    char* ret;
    int quantidadeResultados = 0;

    fflush(stdin);
    printf("buscar por: ");
    gets(pesquisa); 

    for (int i = 0; i < cont; i++)
    {
        ret = strstr(vetor[i].descProduto,pesquisa); 
        if (ret!=0){
            printf(" \t%s\n", vetor[i].descProduto);
            quantidadeResultados++;
            };
        if (quantidadeResultados==0)printf("Nenhum Resultado\n");    
    }
}

void toString(Produto prod){
    printf("\tID do Produto.................: %d\n", prod.idProduto);
    printf("\tProduto.......................: %s\n", prod.descProduto);
    printf("\tValor da unidade..............: %.2f\n", prod.valorUnit);
    printf("\tQuantidade....................: %d\n", prod.quantidade);
    printf("\t\n\n");
}

int main(){
    
    int opcao;
    menu();    
    scanf(" %d", &opcao);

    while (opcao != 9)
    {
        if (opcao == 1)pushProduto();
        if(opcao ==2){
            printf("\n\n\t+---------------------------------------+\n");
            printf("\tPRODUTOS CADASTRADOS\n");
            printf("\t+---------------------------------------+\n");
            for(int i=0; i<cont; i++)toString(vetor[i]);
            printf("\t+---------------------------------------+\n");
            printf("\tTOTAL: %.2f\n", total);
            printf("\t+---------------------------------------+\n\n\n");
        }
        if(opcao == 3)pesquisar();   

        menu();
        scanf(" %d", &opcao);
    }
}
        

    
   
    


