#include <stdio.h>

int main()
{

    int i = 0, operacao;
    float num1, num2, soma, sub, mult, div;

    printf("****MENU DE OPcOES***");
    printf("\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair\n");

    do
    {

        printf("\nDigite o numero correspondente a operacao:  ");
        scanf("%i", &operacao);

        if (operacao != 5)
        {

            printf("Digite dois numeros para fazer o calculo: ");
            scanf("%f%f", &num1, &num2);

            if (operacao == 1)
            {
                soma = num1 + num2;
                printf("%.1f + %.1f = %.1f", num1, num2, soma);
            }

            else if (operacao == 2)
            {
                sub = num1 - num2;
                printf("%.1f - %.1f = %.1f", num1, num2, sub);
            }

            else if (operacao == 3)
            {
                mult = num1 * num2;
                printf("%.1f * %.1f = %.1f", num1, num2, mult);
            }

            else if (operacao == 4)
            {
                div = num1 / num2;
                printf("%.1f / %.1f = %.1f", num1, num2, div);
            }
        }

    } while (operacao != 5);

    return 0;
}