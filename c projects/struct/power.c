#include <stdio.h>
#include <stdlib.h>
int main(){
    int unit,amount;
    float global_bill;
    printf("Enter unit:\n");
    scanf("%d",&unit);
    if(unit<=50){
      amount=unit*0.5;
    }
    else if(unit>50&&unit<=150){
      amount=25+(unit-50)*0.75;
    }  
    else if(unit>150&&unit<=250){
        amount=100+(unit-150)*1.20;
    }
    else if(unit>250){
        amount=220+(unit-250)*1.5;
    }
    global_bill=amount*20/100;
    printf("The bill is:%f\n",global_bill);
    return 0;
}