#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k=4,m;
    for(i=1; i<=4; i++){
        for(j=1; j<=k; j++){
                printf(" ");
        }
        for(m=1; m<=i; m++){
                printf("%d",i);
                printf(" ");
        }
        printf("\n");
        k=k-1;
    }
        
    return 0;
}