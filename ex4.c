#include <stdio.h>

int main()
{
    int i = 0, numero, quantidade = 0;
    float num, media, maior, soma = 0;

    do
    {
        printf("Digite um numero: %i ", i);
        scanf("%f", &num);

        printf("Digite 1 se quiser informar mais um numeo ou 2 se quiser parar: ");
        scanf("%i", &numero);

        if (i == 0)

        {
            maior = num;
        }

        else if (num > maior)
        {        
            maior = num;
        }

        soma = soma + num;
        quantidade++;

        i++;
        
    } while (numero != 2);

    

    media = soma / quantidade;

    printf("O maior numero eh: %.1f", maior);
    printf("\nA media aritmetica dos numeros eh: %.2f", media);

  

    return 0;
}