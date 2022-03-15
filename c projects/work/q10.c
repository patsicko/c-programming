#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int side1,side2,side3,triangle;
	printf("Enter side 1: ");
	scanf("%d",&side1);
	printf("Enter side 2: ");
	scanf("%d",&side2);
	printf("Enter side 3: ");
	scanf("%d",&side3);
	if(side1==side2&&side2==side3)
	{
		printf("The triangle is Equilateral");
	}
	else if((side1==side2&&side1!=side3)||(side1==side3&&side2!=side3)||(side2==side3&&side2!=side1))
	{
		printf("The triangle is Isosceles");
	}
	else if(side1!=side2&&side2!=side3 &&side1!=side3)
	{
		printf("The triangle is Scalene");
	}
	return 0;
}