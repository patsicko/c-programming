#include <stdio.h>
#include <stdlib.h>
int main(){
    int number;
    printf("Enter  a number:\n");
    scanf("%d",&number);
    if(number%5==0 && number%11==0){
        printf("The number:%d is divisible by 5 and 11 \n",number);
        
    }
    
    //else if( number%11==0){
       // printf("The number:%d is divisible by 11\n",number);
 
    else{
        printf("The number:%d is not divisible by 5 and 11\n",number);
    }
    return 0;
}