
#include<stdio.h>
void main()
{


int a,b,tmp;

printf("enter the value of a and b \n");

scanf("%d %d",&a,&b);

printf("value of a is %d \n value of b is %d \n",a,b);



tmp=a;
a=b;
b=tmp;
printf("AFTER SWAPPING \n");
printf("value of a is %d \n value of b is %d",a,b);

}