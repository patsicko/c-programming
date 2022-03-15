#include <stdio.h>
#include <stdlib.h>
void fx(){
    int number[4],sum=0,i=0,average;
    // int sum=0,i=0;
    // int average;
   for(int i=0;i<4;i++){
       printf("Enter number %d:",i+1);
       scanf("%d",&number[i]); 
       sum=sum+number[i];
       average=sum/4;
   }
   
   printf("sum is:%d\n",sum);
   printf("average is:%d\n",average);

   for(int i=0;i<4;i++){
   printf("%d=%d\n",i,number[i]);
   }
   return;
}
int main(){
    fx();
    return 0;
}
 
  
   
 