#include <stdio.h>
#include <stdlib.h>
int pay(int price,int quantity){
    int amount;
    printf("Enter price and quantity:");
    scanf("%d%d",&price,&quantity);
    amount=price*quantity;
    return amount;
}
int main(){
    int result=pay(1,2);
    printf("Total amount to be paid is %d\n",result);
    return 0;
}