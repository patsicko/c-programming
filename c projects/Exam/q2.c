#include <stdio.h>
#include <stdlib.h>
int sum(){
    int a,b,result;
    printf("Enter a and b:\n");
    scanf("%d%d",&a,&b);
    result=a+b;
    return result;
}
int main(){
    int c;
    c=sum();
    printf("The sum is:%d\n",c);
    return 0;
}