#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int combi(int,int);
void print_star()
	{
		int i;
		
		for( i = 0; i < 10; i++ )
		printf("*\n");
	}
	
int sumTwo(int a, int b)
	{
		return a+b;	
	}

int square(int n)
	{
		return(n*n);
	}

int get_max(int a, int b )
	{
		if (a>b) return(a);
		else return(b);
	}

int compute_sum(int a)
	{
		int i;
		int result=0;
		for(i=1;i<=a;i++)
			result += i;
		return result;	
	}

int main(int argc, char *argv[]) {

	//practice01
	//defined function print_star above.

	print_star();
	print_star();
	print_star();
	
		
	//practice02,03
	//defined function sumTwo,square,get_max above.
	
	int output;
	
	output = sumTwo(14,16);
	printf("sumTwo 14,16 = %d\n",output);	
	
	output = square(10);
	printf("square(10) = %d\n",output);
	
	output = get_max(14,16);
	printf("get max 14,16 = %d\n",output);

	
	//practice04
	//make the function as return(n*n)
	int result;
	
	result = square(5);
	printf("5^5=%i\n",result);
	
	
	//practice05
	int sum;
	sum = compute_sum(100);
	printf("sum 1~100=%d\n",sum);
	
	
	//practice06
	int i;
	int max=45;
	
	srand((unsigned)time(NULL));
	for (i=0;i<6;i++)
		printf("%d\t",1+rand()%max);


	//practice07
	int n=5,r=3;
	int result;	
	
	printf("input two number for combination : ");
	scanf("%d %d",&n,&r);
	result = combi(n,r);
	printf("result= %d",result);
	
		
	return 0;
}

int combi(int n,int r)
{
	int i;
	int mom1=1;
	int mom2=1;
	int son=1;
	
	for (i=2;i<=n;i++)
	{
		son = son * i;
	}
	
	for (i=2;i<=(n-r);i++)	
	{
		mom1 = mom1 * i;
	}	 
	
	for (i=2;i<=r;i++)	
	{
		mom2 = mom2 * i;
	}	 
		
	return (son/(mom1*mom2));	
}



