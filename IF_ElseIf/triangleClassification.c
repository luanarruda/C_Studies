#include <stdio.h>

int main()
{
	float lado1, lado2, lado3;

	printf("Digite a medida dos tres lados do triangulo e descubra se ele eh equilatero, isoceles ou escaleno!\n\n");

	printf("Medida do lado 1: ");
	scanf("%f", &lado1);
	printf("Medida do lado 2: ");
	scanf("%f", &lado2);
	printf("Medida do lado 3: ");
	scanf("%f", &lado3);

	if (lado1 == lado2 && lado1 == lado3)
	{
		printf("TRIANGULO EQUILATERO");
	}
	else if ((lado1 == lado2 && lado1 != lado3) || (lado2 == lado3 && lado2 != lado1) || (lado3 == lado1 && lado3 != lado2))
	{
		printf("TRIANGULO ISOCELES");
	}
	else
	{
		printf("TRIANGULO ESCALENO");
	}

	return 0;
}