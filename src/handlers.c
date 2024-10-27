#include "handlers.h"
#include "utils.h"
#include "functions.h"
#include "structs.h"

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void handleQuestao1e2(int questao)
{
    int valor1, valor2;

    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);

    if (questao == 1)
    {
        trocaValores(valor1, valor2);

        printf("\nPassagem por Valor\n\nValor 1: %d | Valor 2: %d", valor1, valor2);
    }
    else
    {
        trocaValoresPonteiros(&valor1, &valor2);

        printf("\n\nPassagem por referencia\n\nValor 1: | %d Valor 2: %d", valor1, valor2);
    }
}

void handleQuestao3()
{
    int vetor[5];

    printf("Insira os numeros: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &(vetor[i]));
    }

    printf("\nVetor: ");
    printVetor(vetor, 5);
}

void handleQuestao4()
{
    int matriz[3][3], soma = 0;

    printf("Insira os numeros, da esquerda para direita, de cima para baixo:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &(matriz[i][j]));
            if (i == j)
                soma += matriz[i][j];
        }
    }

    printf("\nSoma da diagonal principal: %d", soma);
}

void handleQuestao5()
{
    int valor1, valor2;
    int *ptr;

    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);

    ptr = &valor2;

    valor1 = valor1 + *ptr;
    *ptr = valor1 - *ptr;
    valor1 = valor1 - *ptr;

    printf("\nManipulacao por Ponteiro\n\nValor 1: | %d Valor 2: %d", valor1, *ptr);
}

void handleQuestao6()
{
    int *vetor;

    vetor = (int *)malloc(sizeof(int) * 5);

    printf("Insira os numeros: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &(vetor[i]));
    }

    printf("\nVetor: ");
    printVetor(vetor, 5);

    free(vetor);
}
void handleQuestao7()
{
    pessoa_t pessoa;

    printf("Nome: ");
    getchar();
    fgets(pessoa.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    printf("Altura: ");
    scanf("%f", &pessoa.altura);

    printf("Pessoa\n\nNome: %sIdade: %d\nAltura: %.2f", pessoa.nome, pessoa.idade, pessoa.altura);
}
void handleQuestao8()
{
    retangulo_t retangulo;

    printf("Altura: ");
    scanf("%d", &retangulo.altura);
    printf("Largura: ");
    scanf("%d", &retangulo.largura);

    float area = calculaAreaRetangulo(&retangulo);

    printf("Area: %.2f", area);
}
void handleQuestao9()
{
    FILE *fptr;

    fptr = fopen("./files/read.txt", "r");

    char nome[50];
    int idade;
    float altura;

    fscanf(fptr, "%s %d %f", nome, &idade, &altura);

    printf("Nome: %s\nIdade: %d\nAltura: %.2f", nome, idade, altura);

    fclose(fptr);
}
void handleQuestao10()
{
    pessoa_t pessoa;
    FILE *fptr;

    printf("Nome: ");
    getchar();
    fgets(pessoa.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    printf("Altura: ");
    scanf("%f", &pessoa.altura);

    fptr = fopen("./files/write.txt", "w");

    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return;
    }

    fprintf(fptr, "Nome: %sIdade: %d\nAltura: %.2f", pessoa.nome, pessoa.idade, pessoa.altura);

    printf("Arquivo escrito com sucesso!");

    fclose(fptr);
}