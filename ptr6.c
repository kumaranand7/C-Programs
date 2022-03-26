#include <stdio.h>

int main()
{
	int a = 55, b = 66, c = 77;

	printf("The address of a before is %u\n", &a);
	printf("The address of b before is %u\n", &b);
	printf("The address of c before is %u\n", &c);

	a++;
	b++;
	c++;

	printf("\nThe address of a after is  %u\n",&a);
	printf("The address of b after is  %u\n", &b);
	printf("The address of c after is  %u\n", &c);

	return 0;
}