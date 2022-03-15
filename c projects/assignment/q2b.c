#include<stdio.h>
#include<stdlib.h>
int main()
{
	int counter=1, j, amount;
       int ntimes, p=50;
     char letter;
      printf("Welcome to guessing program!\n");
     printf("Please input your amount: \n");
      scanf("%d", &amount);
      if(amount<50){
      	printf("Please input valid amount obove 50 Francs \n");
	  }else{
	  	ntimes=amount/p;
	  		printf("If you fail try %d times\n",ntimes);
	  	while(counter<=ntimes){
	  		printf("Enter Any letter %d \n",counter);
	  		scanf("%s",&letter);
	  		if(letter=='l'||letter=='z'){
	  			printf("Woow Success,If you wish to Play ,Pay again");
	  		return 0;
			  }else{
			  	printf("Fail !!!! ");
			  }
		counter=counter+1;
		  }
		  printf("You have Failed a game,If you wish to Play ,Pay again");
	  
	  }

 return 0;
}