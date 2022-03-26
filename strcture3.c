/*
3. Write a program to store 30 students details such as Roll, Name and
 marks obtained in 5 different subjects. Display the details of 
the students such as Roll, Name and the Total Marks obtained by each student.
*/
#include <stdio.h>
#include <string.h>
 
struct student {
   char name[50];
   int  age;
   int sem;
   int marks1,marks2,marks3,marks4,marks5;

};

int main()

{
struct student s1[100];

int i;

for(i=0; i<2; i++)
{
printf("\n enter the name:");
scanf("%s",s1[i].name);

printf("enter the age:");
scanf("%d",&s1[i].age);

printf("enter the semester:");
scanf("%d",&s1[i].sem);

printf("enter the marks of all subjects:");
scanf("%d",&s1[i].marks1);
scanf("%d",&s1[i].marks2);
scanf("%d",&s1[i].marks3);
scanf("%d",&s1[i].marks4);
scanf("%d",&s1[i].marks5);

}
for(i=0; i<2; i++)
{

printf("\n name :%s",s1[i].name);
printf("\n age : %d",s1[i].age);
printf("\n semester : %d",s1[i].sem);
printf("\n total marks: %d \n",(s1[i].marks1+s1[i].marks2+s1[i].marks3+s1[i].marks4+s1[i].marks5));

}
return 0;
}