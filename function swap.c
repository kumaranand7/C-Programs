#include <stdio.h>
#include <conio.h>
void swap(int,int);

void main{

int a,b;
printf("enter vslue for a");
printf("%d",a);
printf("enter vslue for b");
printf("%d",b);

swap();


}

void swap(int x, int y)
{

int temp;
temp=a;
a=b;
b=temp;
printf("a=%d b=%d ",a,b);


}