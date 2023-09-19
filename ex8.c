#include <stdio.h>

int main()
{

    int i, voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, votoBranco = 0, votoNulo = 0;
    float porcentagem, vencedor, contagemEleitores;

    printf("***ELEICOES***");
    printf("1-Jose\n2-Maria\n3-Joao\n4-Voto branco\n5-Voto nulo\n0-Encerrar a votacao");

    do
    {

        printf("\nDigite o numero de acordo com o seu voto: ");
        scanf("%i", &voto);

        if (voto != 0)
        {
            if (voto == 1)
            {
                candidato1++;
            }
            else if (voto == 2)
            {
                candidato2++;
            }
            else if (voto == 3)
            {
                candidato3++;
            }
            else if (voto == 4)
            {
                votoBranco++;
            }
            else if (voto == 5)
            {
                votoNulo++;
            }
        }

    } while (voto != 0);

    if (candidato1 > candidato2 && candidato1 > candidato3)
    {
        vencedor = candidato1;
        printf("\nCandidato vencedor = Jose!");
    }
    else if (candidato2 > candidato1 && candidato2 > candidato3)
    {
        vencedor = candidato2;
        printf("\nCandidato vencedor = Maria!");
    }
    else if (candidato3 > candidato1 && candidato3 > candidato2)
    {
        vencedor = candidato3;
        printf("\nCandidato vencedor = Joao!");
    }
    else
    {
        printf("\nSegundo Turno!");
    }

    contagemEleitores = candidato1 + candidato2 + candidato3 + votoBranco + votoNulo;

    porcentagem = vencedor / (contagemEleitores)*100;

    printf("\nPorcentual que elegeram o vencedor = %.2f%%", porcentagem);

    printf("\n\nJose = %i votos", candidato1);
    printf("\nMaria = %i votos", candidato2);
    printf("\nJoao = %i votos", candidato3);
    printf("\nVoto Branco = %i votos", votoBranco);
    printf("\nVoto Nulo = %i votos", votoNulo);

    return 0;
}