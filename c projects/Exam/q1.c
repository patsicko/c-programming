#include <stdio.h>
#include <stdlib.h>
int main(){
int number[10];
for(int i=0;i<10;i++){
printf("Enter number%d:",i+1);
scanf("%d",&number[i]);
}
 printf("Below are the indexes and their assigned values.\n");
for(int i=0; i<10; i++){   
printf("Index:%d=%d\n",i,number[i]);
}
return 0;
}
