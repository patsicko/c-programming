#include <stdio.h>
#include <stdlib.h>
int main(){
    int number1,number2;
    printf("Enter two numbers:");
    scanf("%d%d",&number1,&number2);
    if(number1>number2){
        printf("%d is maximum\n",number1);
    }
    else if(number2>number1){
        printf("%d is maximum\n",number2);
    }
    else if(number1==number2){
        printf("%d and %d are equal\n",number1,number2);
    }
    return 0;
}