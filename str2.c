
#include <stdio.h>

void main() {
char str1[50],str2[50];
int i=0;

printf("enter str1: ");
gets(str1);
while(str1[i]!='\0')
{
str2[i]=str1[i];
i++;
}
str2[i]='\0';

printf("str2 is %s",str2);
//puts(str2);
}