#include <stdio.h>

int main()
{

    int i = 0;

    printf("0 ");

    do
    {

        if (i % 2 != 0)
        {
            printf("%i ", i);
        }

        i++;
        
    } while (i <= 100);

    return 0;
}
