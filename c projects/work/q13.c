#include <stdio.h>
#include <stdlib.h>
int main(){
    float unit,bill,totol_bill,surcharge;
    printf("Enter unit:\n");
    scanf("%f",&unit);
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit>50 && unit<=150){
        bill=25+(unit-50)*0.75;
    }

    else if(unit>150 && unit<=250){
        bill=100+(unit-150)*1.20;
    }
    else if(unit>250){
        bill=220+(unit-250)*1.50;
    }
    surcharge=bill*0.20;
    totol_bill=bill+surcharge;
    printf("Total bill is:%.2f\n",totol_bill);
    return 0;

}
