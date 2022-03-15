#include <stdio.h>
#include <stdlib.h>
int cube(){
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result=a*a*a;
    return result;
}
int main(){
    int c= cube();
    printf("The cube of a is:%d",c);
    return 0;
}