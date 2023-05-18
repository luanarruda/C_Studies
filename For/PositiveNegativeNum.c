#include <stdio.h>

int main()
{
	float numero, dobro;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("\n\nDigite um numero: ");
		scanf("%f", &numero);

		if (numero > 0)
		{
			printf("eh um numero positivo");
		}
		else
		{
			printf("eh um numero negativo");
		}
	}

	return 0;
}