#include <stdio.h>
#include <stdlib.h>

int cube(int a)
{
    int result;
    printf("Enter a number:");
     scanf("%d",&a);
    result=a*a*a;
    return result;
    
}
int main(){

   int cube(int a),a; 
   // printf("The cube is:%d",cube(4));
   // int c;
 
   
   // c=cube(a);
    printf("The cube of a is:%d",cube(a)); 
    
    return 0;
}