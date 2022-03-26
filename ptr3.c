
#include<stdio.h>
#include<conio.h>

int main()
{
int x=10, *px=&x;
char c='A', *pc=&c;
float f=12.5, *pf=&f;


printf("\n %d \t %u",x,px);
printf("\n %d \t %u",c,pc);
printf("\n %d \t %u",f,pf);

return 0;
}
