#include <stdio.h>
#include <stdlib.h>
#include "lab.h"

int main()
{
    int vetor[] = {120, 150, 110, 130, 100, 160, 140, 190, 180, 170};
    int i;

    printf("Vetor desordenado: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\nOrdenando por selectionSort:");

    Ordena_selectionSort(vetor, 10);

    printf("\n\nVetor ja ordenado: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    return 0;
}
