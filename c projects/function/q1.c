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
  
    int result1;
    result1=addition();
    float result2;
    result2=average();
    printf("sum is:%d and average is:%f",result1,result2);
    

    return;

}