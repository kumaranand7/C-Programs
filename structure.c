#include <stdio.h>

struct student 
{
	char name[30];
	int rollno;
	
	struct dob{
		int dd;
		int mm;
		int yy;
	}
    DOB;	
};

int main()
{
	struct student std;

	printf("Enter name: "); 
    gets(std.name);
	printf("Enter roll number: ");	
    scanf("%d",&std.rollno);
	printf("Enter Date of Birth [DD MM YY] format: ");
	scanf("%d%d%d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);
	printf("\nName : %s \nrollno : %d \nDate of birth : %02d/%02d/%02d\n",std.name,std.rollno,std.DOB.dd,std.DOB.mm,std.DOB.yy);
	
	return 0;
}