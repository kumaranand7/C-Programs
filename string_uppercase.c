#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main()
{
  	char str[100];
  	int i;
 
  	printf("\n Please Enter a String:  ");
  	gets(str);
  	
  	for (i = 0; str[i]!='\0'; i++)
  	{
  		if(str[i] >= 'a' && str[i] <= 'z')
  		{
  			str[i] = str[i]-32;
		}       
  	}

  	printf(" String in upper Case : %s", str);
  	
  getch();
}