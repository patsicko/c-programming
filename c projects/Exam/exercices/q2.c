#include <stdio.h>
#include <stdlib.h>
int main(){
    int counter=1;
    float number,cube;
    printf("Enter number:");
    scanf("%f",&number);
    while(counter<=number){
    cube=counter*counter*counter;
    printf("Number is:%d and cube is:%.1f\n",counter,cube);
    counter++; 
    }
    return 0;


}
