#include <stdio.h>
#include <stdlib.h>
int main(){
    int counter=1;
    float number,sum,average;
    sum=0;
    while(counter<=10){
        printf("Enter number %d:",counter);
        scanf("%f",&number);
        counter++;
        sum=sum+number;
        average=sum/10;
    }
    printf("The sum is:%.1f and the average is:%.1f\n",sum,average);
    return 0;


}
