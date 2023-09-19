#include <stdio.h>

int main()
{
    int i = 0;
    float grade1, grade2, media;

    do
    {

        printf("Digite a nota do aluno no modulo 1: ");
        scanf("%f", &grade1);

    } while (grade1 < 0 || grade1 > 10);

    do
    {

        printf("Digite a nota do aluno no modulo 2: ");
        scanf("%f", &grade2);

    } while (grade2 < 0 || grade2 > 10);

    media = grade1 + grade2 / 2;

    printf("A media do aluno eh: %.2f", media);

    return 0;
}