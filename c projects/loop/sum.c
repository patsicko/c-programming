#include <stdio.h>
#include <stdlib.h>
int main(){
    int counter=1;
    float number,sum;
    sum=0;
    while(counter<=5){
        printf("Enter number%d:",counter);
        scanf("%f",&number);
        sum=sum+number;
        counter++;
    }
    printf("%.1f:",sum);
    return 0;
}