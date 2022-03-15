#include <stdio.h>
int main()
{
int a,i=1;
printf("Enter a\t");
scanf("%d",&a);
while (i<=10)
{
    /* code */
    printf("%dx%d = %d\t",a,i,a*i);
    i++;
}
return 0;

}