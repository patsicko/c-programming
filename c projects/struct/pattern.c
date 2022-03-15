#include<stdio.h>
#include<stdlib.h>
int main()
{
     int i,j;
     int rows=5;
     int space;
     int k=1;
    for(i=1;i<=5;i++){
        for(space=4;space>=rows-1;space--){
            printf(" ");
        }
   
        for(j=1;j<=(i*2)-1;j++)
       
                {
                    printf("*");
                     
                }

               printf("\n");
        
    }
        return 0;
}