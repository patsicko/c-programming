#include <stdio.h>
#include <stdlib.h>
int addition(){
    int a,b,sum;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    sum=a+b;
    return sum;
}
float average(){
    float average;
    average=addition()/2;
    return average;
}
void main(){
    int result1=addition();
    printf("sum is:%d",result1);

    float result2=average();
    printf("average is:%f",result2);
    

    return;

}