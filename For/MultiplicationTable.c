#include <stdio.h>

int main()
{
	float numero, tabuada;
	int i;

	printf("\nDigite um numero: ");
	scanf("%f", &numero);
	printf("\nTABUADA\n");

	for (i = 0; i < 11; i++)
	{
		tabuada = numero * i;

		printf("\n%.f", tabuada);
	}

	return 0;
}