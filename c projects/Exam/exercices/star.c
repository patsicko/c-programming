#include  <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,space,rows=4,number=1;

    for(i=1; i<=4; i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        } 
        for(j=1;j<=(i*2)-1; j++){
        printf("%c",70);
        
        }
        printf("\n");
    }
    return 0;
}