#include "utils.h"

#include <stdlib.h>
#include <stdio.h>

void clrscr()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void printMenu()
{
    printf("------------------\n");
    printf("1. Funcoes e Passagem por Valor\n");
    printf("2. Funcoes e Passagem por Referencia\n");
    printf("3. Vetores em C\n");
    printf("4. Matrizes em C\n");
    printf("5. Ponteiros e Manipulacao de Variaveis\n");
    printf("6. Ponteiros e Alocacao Dinamica de Memoria\n");
    printf("7. Estruturas em C\n");
    printf("8. Estruturas e Ponteiros\n");
    printf("9. Leitura de Arquivos\n");
    printf("10. Escrita de Arquivos\n");
    printf("------------------\n\n");
}