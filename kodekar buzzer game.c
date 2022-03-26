#include <stdio.h>
#include <string.h>



int main() {

   int n,q,r;
printf("enter the number: ");

   scanf("%d",&n);

   r=n%10;
   printf("r= %d",&r);
          
do{
    
          q=n/10;
}
n=q;
while(q>=9);

       printf("q= %d",&q);    


          
    return 0;
}
