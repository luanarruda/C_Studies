#include <stdio.h>

int main()
{

    int i = 0;
    int operacao;
    float saldoInicial, valor, saldo;

    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldoInicial);

    do
    {

        printf("Digite 1 para deposito, 2 para retirada e 3 para encerrar: ");
        scanf("%i", &operacao);

        if (operacao != 3)
        {

            printf("Digite o valor: R$");
            scanf("%f", &valor);

            if (operacao == 1)
            {

                saldo = saldoInicial + valor;
            }

            else if (operacao == 2)
            {

                saldo = saldoInicial - valor;
            }

            saldoInicial = saldo;
        }

    } while (operacao != 3);

    printf("\nSaldo = %.2f", saldo);

    if (saldoInicial > 0)
    {
        printf("\n\nCONTA PREFERENCIAL!");
    }
    else if (saldoInicial == 0)
    {
        printf("\n\nCONTA ZERADA!");
    }
    else if (saldoInicial < 0)
    {
        printf("\n\nCONTA ESTOURADA!");
    }

    return 0;
}