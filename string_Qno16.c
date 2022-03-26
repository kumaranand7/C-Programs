#include <stdio.h>
int main() {
   char str[150];
   int j;
   
   printf("Enter a string: ");
  gets(str);


   for (int i = 0; str[i] != '\0'; ++i)
    {
           
      while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')) {
         for ( j = i; str[j] != '\0'; ++j) 
         {

            // if jth element of str is not an alphabet,
            // assign the value of (j+1)th element to the jth element
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(str);
   return 0;
}