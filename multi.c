#include <stdio.h>
#include "file2.c"
int main() {
   extern int num;
   
   fun();

    if(num%2==0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}