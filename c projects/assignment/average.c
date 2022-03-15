#include <stdio.h>
#include <stdlib.h>

int sum(){
int a,b,c,sum;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
printf("Enter c:");
scanf("%d",&c);
sum=a+b+c;
return sum;
}

float average()
{
float average;
average=sum()/3;
return average;

}
void main(){
    int sum();
    float average();
    int result1=sum();
    float result2=average();
    printf("sum is:%d and average is:%f",result1,result2);
   
    return;

}