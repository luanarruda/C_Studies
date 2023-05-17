#include <stdio.h>

int main()
{
	float extremidade1, extremidade2, num;

	printf("Digite um intervalo e em seguida um numero: ");
	scanf("%f%f%f", &extremidade1, &extremidade2, &num);

	if (num > extremidade1 && num < extremidade2)
	{
		printf("Esta dentro do intervalo");
	}
	else if (num == extremidade1 || num == extremidade2)
	{
		printf("Este numero esta na extremidade");
	}
	else
	{
		printf("este numero esta fora do intervalo");
	}
	return 0;
}