#include <stdio.h>
#include <stdlib.h>
int main(){
    int number[5];
    for(int i=0;i<5;i++){
        printf("Type number %d:",i+1);
        scanf("%d",&number[i]);
        
    }
    for(int i=0;i<5;i++){
        printf("%d=%d\n",i,number[i]);
    }
    return 0;
}