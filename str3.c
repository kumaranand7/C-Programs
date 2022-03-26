
#include<stdio.h>
#include <string.h>

int main()
{
    
    
char str[50];
printf("enter a string :");
gets(str);

    int i;

    for (i = 0; str[i]!='\0'; i++);
    
    printf("Length of the string is: %d", i);
    return 0;
}

