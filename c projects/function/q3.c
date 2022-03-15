#include <stdio.h>
#include <stdlib.h>
int triangle(){
int side1,side2,side3,perimeter;
printf("Enter three sides:");
scanf("%d%d%d",&side1,&side2,&side3);
perimeter=side1+side2+side3;


return perimeter;
}
float area(){
    float b,h,a;
    printf("Enter base and height:");
    scanf("%f%f",&b,&h);
    a=(b*h)/2;
    return a;
}
int main(){
    int perimeter=triangle();
    float A=area();
    printf("Perimeter is :%d\n Area is:%f",perimeter,A);

    return 0;
}