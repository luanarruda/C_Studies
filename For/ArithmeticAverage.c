#include <stdio.h>

int main()
{
    float num, soma, media;
    int i;

    for (i = 1; i < 10; i++)
    {
        printf("Digite 10 numeros para descobrir sua media aritmetica no final!");
        printf("\nDigite um numero: ");
        scanf("%f", &num);

        soma += num; // " soma += num  é igual a  soma = soma + num"
    }

    media = soma / 10;
    printf("media aritmetica = %f", media);

    return 0;
}