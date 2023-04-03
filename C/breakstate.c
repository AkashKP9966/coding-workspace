#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 9; i++)
    {

        printf("%d \t", i);
        if (i == 6)
            break;
    }

    return 0;
}