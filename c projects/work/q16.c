#include <stdio.h>
#include <stdlib.h>
int main(){
    int m,n;
    printf("Enter m:\n");
    scanf("%d",&m);
    if(m>0){
        n=1;
        printf("%d\n",n);
    }

    else if(m==0){
        n=0;
      printf("%d\n",n);  
    }
    else if(m<0){
        n=-1;
        printf("%d\n",n);
    }
    return 0;
}