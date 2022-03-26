#include<stdio.h>


int main()
{
    
    int i,n, count=1;
     printf("enter any no \t");  
    scanf("%d",&n);
   
        for(i=1;  i<=n; i++)
    {
        
        if(n%i==0)
            count++;
        
    }
    
      if(count==1)
    {
      printf("prime");  
        
    }
    else{

 printf("not prime");  

    }
  
     return 0;
}