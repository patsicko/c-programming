#include <stdio.h>
#include <stdlib.h>
int main(){
    int marks[5]={20,23,40,56,21};
    int* n;
    n=&marks[5];
    printf("Marks are:%d",marks[0]);
    return 0;
   
}