#include <stdio.h>

int main()
{

    int i = 0;

    while (i <= 100)
    {

        if (i % 2 == 0)
        {
            printf("%i ", i);
        }

        i++;
    }

    return 0;
}