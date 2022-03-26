/*  create two structures named Metric and British which store the values
 of metrics. The Metric structure stores the values in meters and centimeters
  and the British structure stores the value in feet and inches. Write a program
   that read values for the structure variables and add values contained in one
    variable of Metric to the contents of another variable of British. The program
     should display the result in the format of feet and inches or meters and centimeters as required. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct metric {
   float mtr;
   float cm;
} d1, result1;


struct british {
   float feet;
   float inch;
} d2, result2;



int main() {

    printf("Enter metric detai:\n");
  
   printf("Enter meter: ");
   scanf("%d", &d1.mtr);
   printf("Enter cm: ");
   scanf("%f", &d1.cm);
  
   printf("Enter british detai:\n");
  
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
 
  
   
 
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

  
   printf("\nSum of britishs = %d\'-%.1f\"", result.feet, result.inch);
   return 0;
}
   return 0;
}