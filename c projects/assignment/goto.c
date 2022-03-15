#include <stdio.h>
#include <stdlib.h>
void main(){
    int i=1;
    int number;
    printf("Enter number");
    scanf("%d",&number);
    table:
    printf("%dx%d=%d\n",number,i,number*i);
    i++;
    if(i<=5)
    goto table;
    return;
}