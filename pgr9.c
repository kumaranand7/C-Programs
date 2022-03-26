
#include<stdio.h>
int main()
{

int (*p) (int,int);
int mul(int,int);
int x,y;

printf("enter any two digit :");
scanf("%d %d",&x,&y);
p=mul;
printf("\n multiplication of %d and %d is  %d",x,y,p(x,y));
return 0;

}

int mul(int a, int b)
{

    return (a*b);
}