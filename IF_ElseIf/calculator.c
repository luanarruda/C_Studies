#include <stdio.h>

int main()
{
	float num1, num2, operacao, resultado;

	printf("OPCOES DE OPERACAO\n\n");
	printf("1 = adicao\n");
	printf("2 = subtracao\n");
	printf("3 = multiplicacao\n");
	printf("4 = divisao\n\n");

	printf("Digite dois numeros e uma opcao de operacao:\n");
	scanf("%f%f%f", &num1, &num2, &operacao);

	if (operacao == 1)
	{
		resultado = num1 + num2;
		printf("resultado = %.2f", resultado);
	}
	else if (operacao == 2)
	{
		resultado = num1 - num2;
		printf("resultado = %.2f", resultado);
	}
	else if (operacao == 3)
	{
		resultado = num1 * num2;
		printf("resultado = %.2f", resultado);
	}
	else
	{
		resultado = num1 / num2;
		printf("resultado = %.2f", resultado);
	}

	return 0;
}
