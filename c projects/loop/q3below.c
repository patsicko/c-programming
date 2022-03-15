#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter an integer above zero:");
    scanf("%d\t",&n);
    while(n>=0){
        printf("%d",n);
        n--;

    }
        
    
    return 0;
}