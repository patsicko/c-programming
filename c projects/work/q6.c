#include <stdio.h>
#include <stdlib.h>
int main(){
int day;
printf("Enter an integer between 1 and 7:");
scanf("%d",&day);
switch (day)
{
case 1:{
    printf("Monday\n");
}
break;
case 2:{
    printf("Tuesday\n");
}
break;
case 3:{
    printf("wednesday\n");
}
break;
case 4:{
    printf("Thusday\n");
}
break;
case 5:{
printf("Friday\n");
}
break;
case 6:{
    printf("Suturday\n");
}
break;
case 7:{
    printf("Sunday\n");
}
break;
default:{
    printf("No day corresponding with the entered number\n");
}
}
return 0;
}
    