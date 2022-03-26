#include<stdio.h>

int main()
{
	int n,d;
    printf("enter no.:");
    scanf("%d",&n);
    
    while(n != 0)
    {
    	d=n%10;
        n=n/10;
        printf("%d\n",d);
    }
    
    return 0;
}   