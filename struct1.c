#include <stdio.h>
#include <string.h>
 
struct college {
   char  name[50];
   char  address[50];
   char  type[100];
   int   rank;
};


int main( ) {

   struct college s1;       

 
   strcpy( s1.name, "KIET ");
   strcpy( s1.address, "NCR,DELHI"); 
   strcpy( s1.type, "ENGINEERING ");
   s1.rank = 1;


   
   printf( "college name : %s\n",s1.name);
   printf( "college address : %s\n",s1.address);
   printf( "college type : %s\n",s1.type);
   printf( "college rank : %d\n",s1.rank);
   return 0;
}


