#include <stdio.h>
#include <stdlib.h>
int main(){
    int counter=1;
    float number,sum;
    sum=0;
    do{printf("Enter number%d:",counter);
    scanf("%f",&number);
    counter++;
    sum=sum+number;}
    while (counter<=5);
    printf("%.1f:",sum);
    return 0;
}