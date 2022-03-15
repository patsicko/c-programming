#include<stdio.h>
#include<stdlib.h>
int main()
{
int amount,withdraw,min;
float bills5,bills2,bills1;

min=1000; 
printf("Enter the amount you want to withdraw\n");
scanf("%d",&withdraw);
 if(withdraw<min)
    {
        printf("Your not allowed to withdraw");
    }

    else{
bills5=withdraw/5000;
bills2=withdraw-(bills5*withdraw)/2000;
bills1=(withdraw-((bills5*5000)+(bills2*2000)))/1000;

    printf("bills of 5000 thousand is %f bills of 2000 is %f bills of 1000 is %f",bills5,bills2,bills1);
    }

}