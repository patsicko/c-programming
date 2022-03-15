#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    while(n=n/500)
    {
    printf("The number of bills are:%d\n",n);
    }
    return 0;
    
}