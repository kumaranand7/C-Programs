/* Write a C program to 
store employee details such as Empid, Name, Salary and 
Age for
 50 employees and display the same for the users. */
#include <stdio.h>
#include <string.h>
 struct employee {
   char name[50];
   int  salary;
   int id;
   int age;

};

int main()

{
struct employee s1[100];

int i;

for(i=0; i<2; i++)
{
printf("\n enter the name:");
scanf("%s",s1[i].name);

printf("enter the salary:");
scanf("%d",&s1[i].salary);

printf("enter the id :");
scanf("%d",&s1[i].id);

printf("enter the age :");
scanf("%d",&s1[i].age);

}
for(i=0; i<2; i++)
{

printf("\n name :%s",s1[i].name);
printf("\n salary : %d",s1[i].salary);
printf("\n id : %d",s1[i].id);
printf("\n age : %d",s1[i].age);

printf("\n");

}
return 0;
}