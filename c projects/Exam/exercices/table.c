#include <stdio.h>
#include <stdlib.h>
int main(){
    int number,n,product;
    printf("Enter number:");
    scanf("%d",&number);
    for(n=1;n<=10;n++){
        product=number*n;
printf("%dx%d=%d\n",number,n,product);
    }
return 0;
}