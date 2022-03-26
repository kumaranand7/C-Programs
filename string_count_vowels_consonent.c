//Write a program in C to count total number of vowel or consonant in a string.


#include <stdio.h>
#include <string.h>
 
 
int main()
{
     char str[1000],i; 
     int c=0; 
     int v=0; 
    
   
    printf("Enter  the string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
  if((str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o' ))
  {
      v++;
  }
  else 
  {

      c++;
  }
 

    }
 printf("vowels =%d \n consonent =%d ",v,c) ; 
    return 0;

}