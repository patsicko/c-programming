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
	printf("enter two numbers:");
	scanf("%d%d",&i,&j);
	
	switch(op)
	{
		case'+':
			result=i+j;
			break;
			case'-':
			result=i-j;
			break;
			case'*':
			result=i*j;
			break;
			case'/':
			result=i/j;
			break;
			case'%':
			result=i%j;
			break;
			
			default:
				printf("invalid operator!!!!!!");
	}
	printf("Result:%d\n",result);
	return 0;
}
int add(int i,int j)
{   int result;
	return result;
}
int sub(int i,int j)
{
	int result;
	return result;
}
int mult(int i,int j)
{
	 int result;
	return result;
}
int divd(int i,int j)
{
	 int result;
	return result;
}
int modelus(int i,int j)
{
	 int result;
	return result;
}