#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,number;
    printf("Enter number");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
    table:
    printf("%dx%d=%d\n",number,i,number*i);
    }
    if(i==5){
    goto table;
    
    }
    return 0;
}