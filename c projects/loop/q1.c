#include <stdio.h>
int main()
{
int a,i=1;
printf("Enter a\n");
scanf("%d",&a);
table:
printf("%dx%d = %d",a,i,a*i);
i++;
if(i<=10)
goto table;
}