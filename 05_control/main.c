#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice01
	int input;
	
	printf("input a number :");
	scanf("%d", &input);
	
	if (input>0)
	printf("positive!!");
	else
	printf("negative!!");
		
	
	//practice02
	int input, result;
	
	printf("input a number :");
	scanf("%d", &input);	
	
	if (input>=0)
		printf("%d\n",input);
	else {
		result = -input;
		printf("%d\n", result);	
	}
	
	//practice03
	int input;
	
	printf("input a number :");
	scanf("%d", &input);
	
	if (input>0)
		printf("positive!!");
	else if (input == 0)
		printf("0!!");
	else
		printf("negative!!");
	
	//practice04
	int i=1;
	int meter;
	
	while(i<3)		
	{
		meter = i*1609;
		printf("%d mile is %d meter.\n",i,meter);
		i++;
	}
	
	//practice05
	int i;
	
	for(i=0;i<10;i++)
		printf("Hello World!\n");
	
	
	//practice06
	
	char input;
	int i=0;
	
	printf("input a character :");
	
	while((input=getchar()) != '\n')
	{
		if (input >= '0' && input <= '9' )
		i++;	

	}
	printf("there are %d integer",i);
	
	//practice07
	int answer=37;
	int input,count;
	
	
	do
	{
		printf ("Guess a number :");
		scanf("%d", &input);
		
		if (input>answer)
			printf("High!!\n");
		else if (input < answer)
			printf("Low!!\n");
		
		count++;		

	}	while(input!=answer);
	
	printf("Congraturations~! You have tried %d times.\n",count);
		
	
	return 0;
}
