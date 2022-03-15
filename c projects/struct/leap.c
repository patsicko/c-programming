#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,k;
    
    for(i=1;i<=10;i++)
    {
    printf("Enter n:\n");
    scanf("%d",&n);
    if(n%400!=0){
if(n%100!=0){
if(n%4==0){
    printf("Leap year");
}
}
else{
    printf("Not leap year");
}

    }
     else{
         printf("Leap year");
     } 


    }




    // if(n%400!=0){
    //     if(n%100!=0){
    //         if(n%4==0){
    //             printf("Leap year\n");
    //         }
    //         else{
    //             printf("Not leap yea\n");
    //         }
    //     }
    //     else{
    //         printf("Not leap year\n");
    //     }

    // }
    // else{
    //     printf("leap year\n");
    // }
    // }
 
    return 0;
}
