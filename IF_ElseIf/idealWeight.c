#include <stdio.h>

int main()
{
    float pesoAtual, altura, sexo, pesoHomem, pesoMulher, pesoMulher1, pesoMulher2, pesoHomem1, pesoHomem2;

    printf("Atraves do seu sexo e da sua altura, descubra seu peso ideal!\n");

    printf("Digite sua altura em m: ");
    scanf("%f", &altura);
    printf("Legal!!\nAgora digite seu peso atual: ");
    scanf("%f", &pesoAtual);
    printf("Legal!!\nAgora considere 1 para Feminino e 0 para Masculino\n");
    printf("Digite seu sexo: ");
    scanf("%f", &sexo);

    if (sexo == 0)
    {
        pesoHomem1 = ((72 * altura) - 62) - 5 / 100;
        pesoHomem2 = (((72 * altura) - 62) * 0.5) / 100;
        pesoHomem = (72 * altura) - 62;
        printf("Peso ideal = %.2f\n", pesoHomem);

        if (pesoAtual > pesoHomem)
        {
            printf("Voce esta acima do peso");
        }
        else if (pesoAtual < pesoHomem)
        {
            printf("Voce esta abaixo do peso");
        }
        else
        {
            printf("Voce esta no peso ideal");
        }
    }
    else if (sexo == 1)
    {
        pesoMulher = (62.1 * altura) - 48.7;
        pesoMulher1 = ((62.1 * altura) - 48.7) - 5 / 100;
        pesoMulher2 = (((62.1 * altura) - 48.7) * 0, 5) / 100;
        printf("Peso ideal = %.2f\n", pesoMulher);

        if (pesoAtual > pesoMulher)
        {
            printf("Voce esta acima do peso");
        }
        else if (pesoAtual < pesoMulher)
        {
            printf("%f", pesoMulher2);
        }
        else if (pesoAtual >= pesoMulher2 || pesoAtual <= pesoMulher1)
        {
            printf("Voce esta no peso ideal");
        }
    }

    return 0;
}