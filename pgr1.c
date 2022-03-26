 #include <stdio.h>
  #include <conio.h>


int main() 
{
    int n,m,p,a;
printf("enter the value of n and m");
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
