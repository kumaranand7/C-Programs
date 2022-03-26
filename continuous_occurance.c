/* *Write a program to remove the continuous occurance of character from a string.
Example: Input String: Hello Meetu Deepak
Output String: Helo Metu Depak */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[50];
    printf("enetr a string \n");
    gets(s);

    int n = strlen(s);
    char prev = '\0';
    int k = 0;


    for (int i = 0; i < n; i++)
    {

        if (s[i] != prev)
        {

            s[k++] = s[i];
        }

        prev = s[i];
    }

    s[k] = '\0';

    printf("%s", s);

    return 0;
}
