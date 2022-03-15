#include <stdio.h>
#include <stdlib.h>
int main(){
    int number[5]={}
    int i;
    int sum=0;
    float average;
    
    for(i=0;i<5;i++){
        printf("Enter numbers%d:",i);
        scanf("%d",&number[i]);
        sum=sum+number[i];
        average=sum/5;

    }
    
    printf("THe sum is:%d\n Average is :%f\n",sum,average);
    for(i=0;i<5;i++)
    {
        printf("%d\n",number[i]);
    }
    return 0;
}