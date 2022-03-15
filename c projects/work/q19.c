#include <stdio.h>
#include <stdlib.h>
int main(int argc , char  *argv[]){
   char Parameter;
   float a,b;
   printf("Enter Parameter(+,-,*,/):");
   scanf("%c",&Parameter);
   printf("Enter 2 numbers\n");
   scanf("%f%f",&a,&b);
    switch (Parameter)
    {
    case '+':
   
    printf("%f+%f=%f",a,b,a+b);
        break;
        case '-':
      printf("%f-%f=%f",a,b,a-b);
        break;
       case '*':
       printf("%f*%f=%f",a,b,a*b);
       break;
       case '/':
       printf("%f/%f=%f",a,b,a/b);
       break; 
    default:
      printf("Error");
        break;
    }
    return 0;
    
}