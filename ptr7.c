
#include<stdio.h>
void main()
{
void fun(int *);
int x;
x=10;
printf("%d \n",x);
fun(&x);
printf("%d",x);
}
void fun(int *p)
{
*p+=10;
}