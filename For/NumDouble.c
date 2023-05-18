#include <stdio.h>

int main()
{
	float numero, dobro;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &numero);

		dobro = numero * 2;

		printf("O dobro eh %.2f", dobro);
	}

	return 0;
}