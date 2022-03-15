#include <stdio.h>
#include <stdlib.h>
int fx(int x,int y)
{  

    printf("Enter x and y:\n");
    scanf("%d%d",&x,&y);
    return x*y;
//printf("The product is:%d\n",p);
//return 0;

}
int main(){
    
    int x,y;

    printf("The product is:%d\n",fx(x,y));

    return 0;
}