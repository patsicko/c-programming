#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,l=1;
    
    for(i=1; i<=4; i++){
        for(j=1; j<=4-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++, l++){
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}

