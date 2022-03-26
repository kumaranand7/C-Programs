#include <stdio.h>



int main() 
{
    int n,m,p,a;

    scanf("%d %d",&n,&m);
    m=m-1;
    
    do
  {      
 
       
        a=n/2;
        n=a;
         m--;
    
    }
   
        while(m!=0);
            printf("%d",n);
    
     
    return 0;
}
