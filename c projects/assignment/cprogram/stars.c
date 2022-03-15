#include <stdio.h>
#include<stdlib.h>
void main(){
int i,rows,space,stars;
printf("Enter rows:");
scanf("%d",&rows);
for(i=1; i<=rows;i++){
for(space=0;space<=rows-i;space++){
printf(" ");
}
for(stars=1;stars<=i*2-1;stars++){
    printf("*");
    
}
printf("\n");


}
return;
}