#include <stdio.h>
#include <stdlib.h>
int main(){
    int number1,number2,number3;
    printf("Enter three numbers:");
    scanf("%d\n%d\n%d",&number1,&number2,&number3);
    if(number1>number2 && number1>number3){
        printf("%d is maximum\n",number1);
    }
    else if(number2>number1 && number2>number3){
        printf("%d is maximum\n",number2);
    }
    else if(number3>number1 && number3>number2){
        printf("%d is maximum\n",number3);
    }
    else if(number1==number2==number3){
        printf("%d,%d and %d are equal\n",number1,number2,number3);
    }
    return 0;
}