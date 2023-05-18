#include <stdio.h>

int main()
{

    int i, maior, menor;
    float num;

    printf("Digite 10 numeros para descobrir o maior deles\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero(%i): ", i);
        scanf("%f", &num);

        if (i == 0)
        {
            maior = num;
            menor = num;
        }

        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }

    printf("O maior numero eh: %i", maior);
    printf("\nO menor numero eh: %i", menor);

    return 0;
}