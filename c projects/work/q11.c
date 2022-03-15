#include <stdio.h>
#include <stdlib.h>
int main(){
float physics_marks,chemistry_marks,biology_marks,percentage;
printf("Enter physics_marks:");
scanf("%f",&physics_marks);
printf("Enter biology_marks:");
scanf("%f",&biology_marks);
printf("Enter chemistry_marks:");
scanf("%f",&chemistry_marks);
percentage=(physics_marks+chemistry_marks+biology_marks)/300*100;
    if(percentage>=90&& percentage<=100){
        printf("A\n");
    }
    else if(percentage>=80 && percentage<90){
        printf("B\n");
    }
    else if(percentage>=70 && percentage<80){
        printf("C\n");
    }
    else if(percentage>=60 && percentage<70){
        printf("D\n");
    }
    else if(percentage>=40 && percentage<60){
        printf("E\n");
    }
    else if(percentage<40){
        printf("F\n");
    }
    else{
        printf("Error\n ");
    }
return 0;
}