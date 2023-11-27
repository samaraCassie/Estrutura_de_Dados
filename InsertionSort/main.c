#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10000

#ifndef CLOCKS_PER_SEC
#define CLOCKS_PER_SEC 1000000
#endif

// Protótipo de Função
void geraNumero(int *vet, int op);
void insertionSort(int *vet, int n);
void imprimirVetor(int *vet);

int main(void) {
    // Variáveis
    int vet1[TAMANHO];

    for (int i = 1; i <= 10; i++) {
        printf("\n\nExecucao: %d\n", i);
        // Entrada de dados;
        geraNumero(vet1, 1);
        // printf("Desordenado: \n\n");
        // imprimirVetor(vet1);

        // Processamento dos dados
        insertionSort(vet1, TAMANHO);

        // Saída de dados
        // printf("\n\nOrdenado: \n\n");
        // imprimirVetor(vet1);
    }
    return 0;
}

// Função geração de números
void geraNumero(int *vet, int op) {
    int i;

    switch (op) {
    case 1: // Ordenados
        for (i = 0; i < TAMANHO; i++) {
            vet[i] = i + 1;
        }
        break;
    case 2: //Invertidos
        for (i = 0; i < TAMANHO; i++) {
            vet[i] = TAMANHO-i;
        }
        break;
    case 3: // Aleatórios
        for (i = 0; i < TAMANHO; i++) {
            vet[i] = (int) (rand() % TAMANHO);
        }
        break;
    }

}



// Função ordenação por inserção
void insertionSort(int *vet, int n) {

    int i, valorAtual, j;
    int qtd_trocas = 0;
    int qtd_comparacoes = 0;

    // Ponto do algoritmo para iniciar o tempo de execução
    clock_t tempo_inicial = clock();

    // Irá realizar as comparações até o último valor do vetor
    for (i = 1; i < n; i++) {
        valorAtual = vet[i];
        j = i - 1;
        qtd_comparacoes++;

        while (j >= 0 && vet[j] > valorAtual) {
            vet[j + 1] = vet[j];
            j--;
            qtd_trocas++;
            qtd_comparacoes++;
        }

        vet[j + 1] = valorAtual;
    }

    // Ponto do algoritmo para calcular o tempo de execução
    clock_t tempo_final = clock() - tempo_inicial;

    // Saída de dados
    printf("\nQuantidade de comparacoes: %i\n", qtd_comparacoes);
    printf("Quantidade de trocas: %i\n", qtd_trocas);
    printf("Tempo de execucao do algoritmo: %.3f segundos", (double)tempo_final / CLOCKS_PER_SEC);
}