#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    char str[50];
    gets(str);
    
    printf("%c",str[0]);
    
    printf("%c",--str['\0']);
    
    return 0;
}