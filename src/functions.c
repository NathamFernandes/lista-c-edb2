#include "functions.h"

void trocaValores(int valor1, int valor2)
{
    int aux = valor1;
    valor1 = valor2;
    valor2 = aux;
}

void trocaValoresPonteiros(int *valor1, int *valor2)
{
    int aux = *valor1;
    *valor1 = *valor2;
    *valor2 = aux;
}

float calculaAreaRetangulo(retangulo_t *retangulo)
{
    return retangulo->largura * retangulo->altura;
}