#include <stdio.h>
void fun1(),fun2();
void main()
{


extern int x;
    printf("%d \n",x);
    fun1();
     printf("%d \n",x);
    fun2();
    printf("%d \n",x);

} 

int x=20;
void fun1()
{

    x+=10;
}
void fun2()
{

    x*=5;
}

