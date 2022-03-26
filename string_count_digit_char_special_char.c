
#include <stdio.h>
#include <string.h>
 
 
int main()
{
     char str[1000],i; 
     int num=0; 
     int chr=0; 
     int spc=0; 
   
    printf("Enter  the string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
  if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
  {
      chr++;
  }
  else if(str[i]>='0' && str[i]<='9')
  {

      num++;
  }
 
  else 
{
      spc++;
  }

    }
 printf("special characetr =%d \n numbers =%d \n characters =%d ",spc,num,chr) ; 
    return 0;

}