#include <stdio.h>

int main()
{
	float num1, num2, num3;
	printf("digite 3 numeros e descubra se algum deles se repetem:\n");

	printf("Primeiro numero: ");
	scanf("%f", &num1);
	printf("Segundo  numero: ");
	scanf("%f", &num2);
	printf("Terceiro numero: ");
	scanf("%f", &num3);

	if (num1 == num2 || num1 == num3 || num2 == num3)
	{
		printf("ha numeros que se repetem");
	}
	else
	{
		printf("nao ha numeros que se repetem");
	}

	return 0;
}
