#include <stdio.h>
#include <stdlib.h>
int main(){
    int counter;
    float number,sum;
    sum=0;
for(counter=1;counter<=5;counter++){
    printf("Enter number%d:",counter);
        scanf("%f",&number);
        sum=sum+number;
}
    printf("%.1f:",sum);
    return 0;
}