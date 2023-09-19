#include <stdio.h>

int main()
{
    int i, divisor, inicio, fim;

    printf("Digite o valor do divisor: ");
    scanf("%i", &divisor);
    printf("Digite o inicio do intervalo: ");
    scanf("%i", &inicio);
    printf("Digite o fim do intervalo: ");
    scanf("%i", &fim);

    i = inicio;

    printf("Numeros divisiveis por %i no intervalo de %i a %i: ", divisor, inicio, fim);

    while (i <= fim)
    {

        if (i % divisor == 0)
        {
            printf(" %i ", i);
        }

        i++;
    }

    return 0;
}