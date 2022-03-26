#include<stdio.h>
int main()
{
    
    int i,n,p=0, count=1;
   
    scanf("%d",&n);
    
  do
  {
    for(i=1;  i<=n; i++)
    {
        
        if(n%i==0)
            count++;
        
    }

  if(count!=1)
 {
     p++;
          n--;
    
 }
  }
  while (n==0);

  printf("%d",p);
     return 0;
}