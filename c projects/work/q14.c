#include <stdio.h>
#include <stdlib.h>
int main(){
    int number1,number2;
    printf("Enter two numbers:");
    scanf("%d\n%d",&number1,&number2);
    if(number1==number2){
        printf("Number1(%d) and number2(%d) are equal\n",number1,number2);
    }
    else{
        printf("Number1(%d) and number2(%d) are not equal\n",number1,number2);
    }
    return 0;
}