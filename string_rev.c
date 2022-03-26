#include <string.h>
 
 
int main()
{
     char s1[1000],s2[1000];  
   
    printf("Enter  the string: ");
    gets(s1);

    strcpy(s2,strrev(s1));
   
    if(strcmp(s1,s2)==0)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
    
    
    return 0;
    
    
}