#include <stdio.h>

int main()
{
    float num, positivo = 0, negativo = 0;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite 10 numeros para descobrir quantos são positivos e negativos");
        printf("\nDigite um numero: ");
        scanf("%f", &num);

        if (num > 0)
        {
            positivo++;
        }
        else if (num < 0)
        {
            negativo++;
        }
    }

    printf("Quantidade de positivos = %.f", positivo);
    printf("\nQuantidade de negativos = %.f", negativo);

    return 0;
}