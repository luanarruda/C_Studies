#include <stdio.h>

int main()
{
	float num1, num2, num3;

	printf("Digite tres numeros e receba o maior deles:\n");
	scanf("%f%f%f", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3)
	{
		printf("O maior numero eh: %.2f", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("O maior numero eh: %.2f", num2);
	}
	else
	{
		printf("O maior numero eh: %.2f", num3);
	}

	return 0;
}
