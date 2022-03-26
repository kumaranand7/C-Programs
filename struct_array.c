#include <stdio.h>
#include <string.h>
 
struct student {
   char  name[50];
   char  address[50];

   int   rno;
};

int main()

{
struct student s1[5];


strcpy(s1[0].name,"anand");
strcpy(s1[0].address,"Varanasi");
s1[0].rno=7;


strcpy(s1[1].name,"mukul");
strcpy(s1[1].address,"delhi");
s1[1].rno=10;



strcpy(s1[2].name,"mukul");
strcpy(s1[2].address,"delhi");
s1[2].rno=10;


printf("\n %s",s1[0].name);
printf("\n %s",s1[0].address);
printf("\n %d",s1[0].rno);


printf("\n %s",s1[1].name);
printf("\n %s",s1[1].address);
printf("\n %d",s1[1].rno);


printf("\n %s",s1[2].name);
printf("\n %s",s1[2].address);
printf("\n %d",s1[2].rno);





}
