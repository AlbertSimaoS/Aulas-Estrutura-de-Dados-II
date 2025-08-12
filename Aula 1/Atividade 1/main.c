#include <stdio.h>
#include <stdlib.h>
#include "lab.h"

int main()
{
    //Busca Linear
    int vetor[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
    int elem = 100;
    int i, x;

    printf("Vetor: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nElemento a ser procurado por busca linear: %d", elem);

    x = buscaLinear(vetor, 10, elem);

    printf("\nA posicao do elemento e: %d", x);

    //Busca Ordenada
    int vetor2[] = {100, 110, 120, 130, 140, 150, 160, 170, 180, 190};
    elem = 170;

    printf("\n\nVetor: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nElemento a ser procurado por busca linear: %d", elem);

    x = buscaOrdenada(vetor2, 10, elem);

    printf("\n\nA posicao do elemento e: %d", x);

    //Busca Binária
    elem = 130;

    printf("\n\nElemento a ser procurado por busca linear: %d\n", elem);

    x = buscaBinaria(vetor2, 10, elem);

    printf("\nA posicao do elemento no vetor e: %d", x);

    return 0;
}
