#include <stdio.h>

int main()
{

    int i, j, size;

    printf("Digite um numero de 1 a 10 para definir o tamanho do quadrado\n");
    scanf("%i", &size);

    for (i = 0; i < (size + size); i++)
    {
        printf("x");
    }

    printf("\n");

    for (i = 0; i < (size * 2) - 2; i++)
    {
        printf("x");

        for (j = 0; j < size * 2 - 2; j++)
        {
            printf(" ");
        }

        printf("x\n");
    }

    for (i = 0; i < (size + size); i++)
    {
        printf("x");
    }

    return 0;
}