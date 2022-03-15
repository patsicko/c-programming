#include <stdio.h>
#include <stdlib.h>
int main(){
   int i,n,j,sum=0;
printf("Enter any Number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(sum=0,j=1;j<=i;j++)
{
sum=sum+j;
if(j!=i){
printf("%d + ",j);
}else{
printf("%d = ",j);}
}
printf("%d",sum);
printf("\n");
}
return 0;
}