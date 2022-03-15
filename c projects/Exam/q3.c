#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add(int i,int j);
int sub(int i,int j);
int mult(int i,int j);
int divd(int i,int j);
int modelus(int i,int j);
int main(int argc, char *argv[]) {
	int i,j,result=0;
	char op;
	printf("enter your operator:");
	scanf("%c",&op);
	printf("enter first number:");
	scanf("%d",&i);
	printf("enter second number:");
	scanf("%d",&j);
	switch(op)
	{
		case'+':
			result=add(i,j);
			break;
			case'-':
			result=sub(i,j);
			break;
			case'*':
			result=mult(i,j);
			break;
			case'/':
			result=divd(i,j);
			break;
			case'%':
			result=modelus(i,j);
			break;
			
			default:
				printf("invalid operator!!!!!!");
	}
	printf("%d%c%d=%d",i,op,j,result);
	return 0;
}
int add(int i,int j)
{
	return i+j;
}
int sub(int i,int j)
{
	return i-j;
}
int mult(int i,int j)
{
	return i*j;
}
int divd(int i,int j)
{
	return i/j;
}
int modelus(int i,int j)
{
	return i%j;
}