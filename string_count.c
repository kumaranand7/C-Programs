
#include <stdio.h>
#include <string.h>
 
 
int main()
{
     char s1[1000],i; 
     int count=1; 
   
    printf("Enter  the string: ");
    gets(s1);

    for(i=0; s1[i]!='\0'; i++)
    {
 if(s1[i]==' ')
 {

      

       count++;
 }
 
    }
    printf("%d",count);
    
      
    return 0;

}