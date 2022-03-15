#include <stdio.h>
#include <stdlib.h>
int main(){
    int amount,account_money,withdraw_money,bill5,bill2,bill1,remainder,min;
    printf("Enter amount:");
    scanf("%d",&amount);
    printf("Enter account_money:");
    scanf("%d",&account_money);
    printf("Enter money to withdraw:");
    scanf("%d",&withdraw_money);
    min=1000;
    if(withdraw_money<min){
        printf("Error");
    }
    else{
        bill5=withdraw_money/5000;
        bill2=(withdraw_money-(bill5*5000))/2000;
        bill1=(withdraw_money-((bill5*5000)+(bill2*2000)))/1000;
        printf("Take your money \n bills of 5000:%d\n bills of 2000:%d \n bills of 1000:%d",bill5,bill2,bill1);

    }
    return 0; 
}