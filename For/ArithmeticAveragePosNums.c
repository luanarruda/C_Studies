#include <stdio.h>

int main()
{
    float media;
    int i, num, quantidade, soma = 0;

    printf("DESCUBRA A MEDIA ARITMETICA!");
    printf("\nQuantos numeros deseja digitar?\n");
    scanf("%i", &quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf("Digite um numero inteiro: ");
        scanf("%i", &num);

        soma = soma + num;
    }

    media = soma / quantidade;

    printf("Media aritmetica = %.f", media);
}