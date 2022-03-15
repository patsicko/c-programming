#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,sum;
    for(i=1;i<=5;i++){
        for(sum=0,j=1;j<=i;j++){
            sum=sum+j;
            if(j==i){
                printf("%d=",j);
            }else{
                printf("%d+",j);
            }
            
        }
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}