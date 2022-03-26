/* 2. Write a program to store 50 players details such as Player Name,
 Country Name and batting average. Using the database
Display the details of the players who are playing for a given country. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct player
{
   char name[50];

   char country[50];
   float avg;
};

int main()

{
   struct player s1[100];

   int i;

   for (i = 0; i < 3; i++)
   {
      printf("\n enter the name:");
      scanf("%s", s1[i].name);

      printf("enter the country name:");
      scanf("%s", s1[i].country);

      printf("enter the average :");
      scanf("%f", &s1[i].avg);
   }

   char s[50];
   printf("Enter the country name for players detail :");
fflush(stdin);
   //scanf("%s", s);
   gets(s);
   printf("\n ----- Players detail of country %s --- \n", s);

   for (i = 0; i < 3; i++)
   {

      if (strcmp(s, s1[i].country) == 0)
      {
         printf("\n name :%s", s1[i].name);
         printf("\n country : %s", s1[i].country);
         printf("\n average : %.2f", s1[i].avg);
         printf("\n");
      }
   }
   return 0;
}