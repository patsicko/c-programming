#include <stdio.h>
#include <stdlib.h>
void cube(){
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result=a*a*a;
    printf("The cube of a is:%d",result); 
}
int main(){
    cube();
    
    return 0;
}