#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    printf("Enter  a number:\n");
    scanf("%d",&number);
    if(number<0){
        printf("The number:%d is negative\n",number);
    }
    if(number>0){
        printf("The number:%d is positive\n",number);
    }
    if(number==0){
        printf("The number:%d is equal to zero\n",number);
    }
}