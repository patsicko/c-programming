#include <stdio.h>
#include <stdlib.h>
int main(){
    int subject1,subject2,subject3,total,average;
    printf("Enter subject1 marks:\n");
    scanf("%d",&subject1);
    printf("Enter subject2 marks:\n");
    scanf("%d",&subject2);
    printf("Enter subject3 marks:\n");
    scanf("%d",&subject3);
    total=subject1+subject2+subject3;
    average=total/3;
    if(subject1<35||subject2<35||subject3<35){
    printf("Student failed");
    }
    else if(average>=60){
printf("The student is in first class with total marks:%d and average of:%d",total,average);
    }
else{
    printf("The student is in second class with total marks:%d and average of:%d",total,average);
}
return 0;
}