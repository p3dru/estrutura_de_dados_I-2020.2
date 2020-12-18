#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int ordena(int vet[], int n)
{
    int aux = 0, temp = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        j = i + 1;
        if (vet[i] > vet[j])
        {
            temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        }
    }
    ordena(vet, n-1);
}

int main(void)
{

    setlocale(LC_ALL, "");

    // Criar vetor
    int n = 0;
    printf("Quantidade de elementos: ");
    scanf("%d", &n);

    // Preencher vetor
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        printf("%d Elemento: ", i + 1);
        scanf("%d", &vet[i]);
    }
    int ordena(vet, n);
    // // Ordenar Vetor
    // int aux = 0, temp = 0, j = 0;

    // for (int j = 0; j < n; j++)
    // {
    //     /* code */
    //     for (int i = 0; i < n; i++)
    //     {
    //         j = i + 1;
    //         if (vet[i] > vet[j])
    //         {
    //             temp = vet[i];
    //             vet[i] = vet[j];
    //             vet[j] = temp;
    //         }
    //     }
    // }

    // Exibir vetor
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vet[i]);
    }

    system("pause");
    return 0;
} // TODO: erro na saida do vetor ordenado
