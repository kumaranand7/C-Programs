#include <stdio.h>
#include <conio.h>

void main()
{

    int i, n;

    for (n = 1; n <= 100; n++)
    {
       int count = 0;
        for (i = 1; i <= 100; i++)
        {

            if (n % i == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d ", n);
        }
    }
}