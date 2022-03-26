#include <stdio.h>
#include <conio.h>

void main()
{

    int i, rev,n=98765;
    
 do
{
    rev=n%10;
    printf("%d",rev);
    n=n/10;
}
 while(n>0);
    
}