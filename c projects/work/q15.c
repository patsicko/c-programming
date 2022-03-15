#include <stdio.h>
#include <stdlib.h>
int main(){
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("year %d is a leap year\n",year);
    }
    else if(year%100==0 ){
        printf("Year %d is not a leap year\n",year);
    }
    else if(year%400==0){
      printf("year %d is a leap year\n",year);  
    }
    else{
        printf("Year %d is not a leap year\n",year);
    }
    return 0;
}