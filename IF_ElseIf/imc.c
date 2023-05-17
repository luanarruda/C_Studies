#include <stdio.h>
int main()
{
    float peso, altura, imc;

    printf("Descubra seu IMC (Indice de Massa Corporal)\n");

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5)
    {
        printf("Voce esta abaixo do peso");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Voce esta no peso ideal!");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Voce esta sobrepeso!");
    }
    else if (imc >= 30 && imc < 35)
    {
        printf("Voce tem Obesidade Grau I ");
    }
    else if (imc >= 35 && imc < 40)
    {
        printf("Voce tem Obesidade Grau II");
    }
    else
    {
        printf("Voce tem Obesidade Grau III");
    }

    return 0;
}