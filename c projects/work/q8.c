#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int angle1,angle2,angle3,triangle;
	printf("Enter angle 1: ");
	scanf("%d",&angle1);
	printf("Enter angle 2: ");
	scanf("%d",&angle2);
	printf("Enter angle 3: ");
	scanf("%d",&angle3);
	triangle=angle1+angle2+angle3;
	printf("Sum of angles= %d\n",triangle);
	if(triangle==180)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid");
	}
	return 0;
}
