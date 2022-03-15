#include <stdio.h>
#include <stdlib.h>
int main(){
    int number,i;
   // for(i=1;i<=7;i++){
    printf("Enter number between one and seven:");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("Thusday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
    default:
        break;
    // }
    }
    return 0;
}