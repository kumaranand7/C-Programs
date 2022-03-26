

#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10];
 	int Subtraction[10][10];
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   
 	printf("\n Please Enter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
  	}
  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];    
   	 	}
  	}
 
 	printf("\n After Subtracting Matrix a from Matrix b = a - b \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", Subtraction[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}