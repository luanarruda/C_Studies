#include <stdio.h>

int main()
{
	float numero, mediaTeorica, mediaLaboratorio, mediaFinal;
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("\n\nDigite a media teorica: ");
		scanf("%f", &mediaTeorica);
		printf("Digite a media de laboratorio: ");
		scanf("%f", &mediaLaboratorio);

		mediaFinal = mediaTeorica * 0.6 + mediaLaboratorio * 0.4;

		printf("Media Final = %.2f", mediaFinal);

		if (mediaFinal >= 5 && mediaFinal < 7)
		{
			printf("\nSituacao = razoavel");
		}
		else if (mediaFinal >= 7)
		{
			printf("\nSituacao = bem");
		}
		else if (mediaFinal < 5)
		{
			printf("\nSituacao = mal");
		}
	}

	return 0;
}