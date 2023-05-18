#include <stdio.h>

int main()
{

    int i, filhos;

    float salario, mediaSalario, mediaFilhos, somaSalario, somaFilhos, maiorSalario, salariomil, porcentual;

    printf("\nPESQUISA DA PREFEITURA\n");

    for (i = 0; i < 15; i++)
    {

        printf("\nDigite o valor do seu salario: ");
        scanf("%f", &salario);

        printf("Digite a quantidade de filhos: ");
        scanf("%i", &filhos);

        somaFilhos += filhos;
        somaSalario += salario;

        if (i == 0)
        {
            maiorSalario = salario;
        }

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario < 1000)
        {
            salariomil++;
        }
    }

    porcentual = (salariomil / 15) * 100;

    mediaSalario = somaSalario / 15;
    mediaFilhos = somaFilhos / 15;

    printf("\n***RESULATADOS***\n");

    printf("\nMedia do salario da populacao = %.2f", mediaSalario);
    
    printf("\nMedia de numero de filhos da populacao = %.f", mediaFilhos);

    printf("\nO maior salario eh: %.2f", maiorSalario);

    printf("\nSalarios ate 1000 = %.f", salariomil);

    printf("\nO porcentual de pessoas com salario ate 1000 = %.1f%%\n", porcentual);
}
