#include <stdio.h>
#include <stdlib.h>
int main(){
    char agent_letter,client_letter;
    int i=1,amount,minimum=50;
   printf("For agent only! Enter a letter:");
   scanf("%c",&agent_letter);
   printf("Welcome to guessing game\n Enter Money:");
   scanf("%d",&amount);
   if(amount<50){
       printf("Minimum amount is 50");
   }
   else
    printf("Enter a letter to guess:%d\n",i);
    scanf("%c",&client_letter);
    while (i<=amount/50)
    {   
         scanf("%c",&client_letter);
        
        if(client_letter==agent_letter)
        {
            printf("Congratulation! you won the game\n");
            return 0;
        }
        if (client_letter!=agent_letter)
        {
           printf("You failed! try again:\n");
           printf("Enter a letter to guess:%d\n",i+1);
           scanf("%c",&client_letter);
        
        }
       i++;
    }
    printf("Sorry, your balance is low, enter money if you wish to continue\n");

     return 0;
}