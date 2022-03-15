#include <stdio.h>
#include <stdlib.h>
int main(){
int month;
printf("Enter month number between 1 and 12:");
scanf("%d",&month);
switch (month)
{
case 1:{
    printf("The number of the days is 31\n");
}
break;
case 2:{
    printf("The number of the days is 28\n");
}
break;
case 3:{
    printf("The number of the days is 31\n");
}
break;
case 4:{
    printf("The number of the days is 30\n");
}
break;
case 5:{
printf("The number of the days is 31\n");
}
break;
case 6:{
    printf("The number of the days is 30\n");
}
break;
case 7:{
    printf("The number of the days is 31\n");
}
break;
case 8:{
    printf("The number of the days is 30\n");
}
break;
case 9:{
    printf("The number of the days is 31\n");
}
break;
case 10:{
    printf("The number of the days is 30\n");
}
break;
case 11:{
    printf("The number of the days is 31\n");
}
break;
case 12:{
    printf("The number of the days is 31\n");
}
break;
default:{
    printf("You entered incorrect number\n");
}
}
return 0;
}
    