int buscaLinear(int *vetor, int n, int elem)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(elem == vetor[i])
        {
            return i;
        }
    }
    return -1;
}

int buscaOrdenada(int *vetor, int n, int elem)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(elem == vetor[i])
        {
            return i;
        } else
        {
            if(elem < vetor[i])
            {
                return -1;
            }
        }
    }
    return -1;
}

int buscaBinaria(int *vetor, int n, int elem)
{
    int i, inicio, meio, fim;
    inicio = 0;
    fim = n - 1;

    while(inicio <= fim)
    {
        printf("inicio = %d, fim = %d\n", inicio, fim);
        meio = (inicio + fim)/2;
        if(elem < vetor[meio])
        {
            fim = meio - 1;
        } else
        {
            if(elem > vetor[meio])
            {
                inicio = meio + 1;
            } else
            {
                return meio;
            }
        }
    }
    return -1;
}
