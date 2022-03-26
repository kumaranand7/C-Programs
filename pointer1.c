#include <stdio.h>


void main()
{
    
  
  int *p;
  int x=5;
  p=&x;
    
    printf("%d",*(&*p));

    
    
}